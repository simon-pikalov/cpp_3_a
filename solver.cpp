//
//  Demo.cpp
//  operatorOverload
//
//  First version by Adam Lev-Ari on 29/12/2019.
//  Second version by Erel Segal-Halevi on 22/04/2020.
//

#include <iostream>
#include <complex>
#include <string>
#include "solver.hpp"


using namespace std;

using namespace solver;


class invalidInputExeption: public exception
{
    virtual const char* what() const throw()
    {
        return "x power can be only equal or less than  2 ";
    }
} xPowerEx;


class noSulutionExExeption: public exception
{
    virtual const char* what() const throw()
    {
        return "Your equation has no sulution in this Number field ";
    }
} noSulutionEx;


class devideByZeroExeption: public exception
{
    virtual const char* what() const throw()
    {
        return "Your equation has no sulution in this Number field ";
    }
} devideByZeroEx;



double solver::round(double toRound){
    double rounded=std::round(toRound*1000);
    return rounded/1000;
}



RealVariable::RealVariable() {
    this->ax_2=0;
    this->bx=1;
    this->c=0;
}

RealVariable::~RealVariable() {
}

ComplexVariable::ComplexVariable() {
    this->ax_2=(0.0);
    this->bx=1.0+0i;
    this->c=(0.0,0.0);
}

ComplexVariable::~ComplexVariable() {

}






ostream& solver::operator<< (ostream& os,RealVariable r) {
    string ax_2Singm="";
    string bxSingm="";
    string cSingm="";
    if(r.ax_2<0) ax_2Singm+="";
    if(r.bx<0) bxSingm+="";
    else bxSingm+="+";
    if(r.c<0) cSingm+="";
    else cSingm+="+";




    string ax_2=(r.ax_2==0)? "" : ax_2Singm+to_string(round(r.ax_2))+"x^2";
    string bx=(r.bx==0)? "" : bxSingm+to_string(round(r.bx))+"x";
    string c=(r.c==0)? "" : cSingm+to_string(round(r.c));



    return (os <<ax_2 <<bx<<c);
}


double solver::solve(RealVariable a)
{
//cout<<"debug"<<a<<"="<<endl;
    if(a.ax_2!=0){
        double minusB = -a.bx;
        double twoA = 2*a.ax_2;
        double delta = ((a.bx*a.bx)-4*a.ax_2*a.c);
        if(delta<0) throw noSulutionEx; // no soulution in R field
        //cout<<"debug"<<a<<"=";
        return ((minusB+sqrt(delta))/twoA);
    }
    else{
        if(a.c==0&&a.bx!=0) throw devideByZeroEx;
        //cout<<"debug"<<a<<"=";
        return(-a.c/a.bx);
    }


}


complex<double> solver::solve(ComplexVariable comp) {return 666i;}



//double and RealVariable
RealVariable solver::operator*(RealVariable a ,double b){
    RealVariable ans=RealVariable();
    ans.ax_2 =a.ax_2*b;
    ans.bx= a.bx*b;
    ans.c= a.c*b;
    return ans;
} //  *
RealVariable solver::operator*(double b,RealVariable a ){
    return solver::operator*(a,b);
}
RealVariable solver::operator-(RealVariable a ,double b){
    RealVariable ans=RealVariable();
    ans.ax_2 =a.ax_2;
    ans.bx= a.bx;
    ans.c= a.c-b;
    return ans;
} //  -


RealVariable solver::operator-(double b,RealVariable a ){
    return solver::operator-(a,b);
}
RealVariable solver::operator+(RealVariable a ,double b){
    RealVariable ans=RealVariable();
    ans.ax_2 =a.ax_2;
    ans.bx= a.bx;
    ans.c= a.c+b;
    return ans;
} //  +
RealVariable solver::operator+(double b,RealVariable a ){
    return solver::operator+(a,b);
}
RealVariable solver::operator/(RealVariable a ,double b){
    return solver::operator*(a,1/b);
} //  /
RealVariable solver::operator/(double b,RealVariable a ){
    return solver::operator*(a,1/b);
}
RealVariable solver::operator^(RealVariable a ,double pow){
    if(pow>=3||a.ax_2!=0) throw xPowerEx;
//case one there is onle x ;
    if(a.bx!=0&&a.c==0) {
        a.ax_2=a.bx*a.bx;
        a.bx=0;
        return a;
    }

//case two (ax+c)^2;
    else if(a.bx!=0&&a.c!=0) {
        double prevBx = a.bx;
        a.ax_2=a.bx*a.bx;
        a.bx=2*prevBx*a.c;
        a.c=a.c*a.c;
    }

    return a; //case it's 0
}


RealVariable solver::operator==(RealVariable a ,double b){
    a.c=a.c-b; //move b to the left side of the equation
    return a;
}//  ==
RealVariable solver::operator==(double b,RealVariable a ){
    solver::operator==(a,b);
}

//RealVariable and RealVariable
RealVariable solver::operator+(RealVariable a ,RealVariable  b){

    RealVariable ans=RealVariable();
    ans.ax_2=a.ax_2+b.ax_2;
    ans.bx=a.bx+b.bx;
    ans.c=a.c+b.c;
    return ans;





} //  +
RealVariable solver::operator-(RealVariable a ,RealVariable  b){
    RealVariable ans=RealVariable();
    ans.ax_2=a.ax_2-b.ax_2;
    ans.bx=a.bx-b.bx;
    ans.c=a.c-b.c;
    return ans;
} //  -
RealVariable solver::operator/(RealVariable a ,RealVariable  b) {
    return RealVariable();
}//  /
RealVariable solver::operator*(RealVariable a ,RealVariable  b){
    return RealVariable();
}//  *
RealVariable solver::operator==(RealVariable a , RealVariable b){

    RealVariable ans=RealVariable();
    ans.ax_2=a.ax_2-b.ax_2;
    ans.bx=a.bx-b.bx;
    ans.c=a.c-b.c;
    return ans;





} //==


///////////////////////////////////////////////__________COMLEX_____________________________////////////////////////////


ostream& solver::operator<< (ostream& os,  ComplexVariable c){

    string ax_2Singm="";
    string bxSingm="";
    string cSingm="";
    if(c.ax_2.real()<0) ax_2Singm+="";
    if(c.bx.real()<0) bxSingm+="";
    else bxSingm+="+";
    if(c.c.real()<0) cSingm+="";
    else cSingm+="+";

    string ax_2=(c.ax_2==(0.0,0.0))? "" :"("+ax_2Singm+to_string((c.ax_2).real())+","+to_string((c.ax_2).imag())+"i)"+"x^2";
    string bx=(c.bx==(0.0,0.0))? "" : "("+bxSingm+to_string((c.bx).real())+","+to_string((c.bx).imag())+"i)"+"x";
    string cC =(c.c==(0.0,0.0))? "" :"("+cSingm+to_string((c.c).real())+","+to_string((c.c).imag())+"i)";
    return (os <<ax_2 <<bx<<cC);


}



//ComplexVariable and double
ComplexVariable solver::operator*(ComplexVariable a ,double b){
    ComplexVariable ans=ComplexVariable();
    ans.ax_2 =a.ax_2*b;
    ans.bx= a.bx*b;
    ans.c= a.c*b;
    return ans;

} // *
ComplexVariable solver::operator*(double b,ComplexVariable a ){
    return solver::operator*(a,b);

}
ComplexVariable solver::operator-(ComplexVariable a ,double b){
    ComplexVariable ans=ComplexVariable();
    ans.ax_2 =a.ax_2;
    ans.bx= a.bx;
    ans.c= a.c-b;
    return ans;
}// -
ComplexVariable solver::operator-(double b,ComplexVariable a ){
    return solver::operator-(a,b);
}
ComplexVariable solver::operator+(ComplexVariable a ,double b){
    ComplexVariable ans=ComplexVariable();
    ans.ax_2 =a.ax_2;
    ans.bx= a.bx;
    ans.c= a.c;
    return ans;
}// +
ComplexVariable solver::operator+(double b,ComplexVariable a ){
    return solver::operator+(a,b);
}
ComplexVariable solver::operator/(ComplexVariable a ,double b){
    ComplexVariable ans=ComplexVariable();
    ans.ax_2 =a.ax_2/b;
    ans.bx= a.bx/b;
    ans.c= a.c/b;
    return ans;}// /
ComplexVariable solver::operator/(double b,ComplexVariable a ){
    return solver::operator/(a,b);
}
ComplexVariable solver::operator^(ComplexVariable a ,double pow){
    if(pow>=3||a.ax_2.real()!=0&&pow!=1) throw xPowerEx;
//case one there is onle x ;
    if(a.bx.real()!=0&&a.c==complex<double> (0.0,0.0)) {
        a.ax_2=a.bx*a.bx;
        a.bx=0;
        return a;
    }

//case two (ax+c)^2->(a^2+2ab+b^2);
    else if(a.bx!=complex<double> (0.0,0.0)&&a.c!=complex<double> (0.0,0.0)) {
        complex<double> prevBx = a.bx;
        a.ax_2=a.bx*a.bx;
        a.bx= complex<double>( 2.0, 1.0 )*prevBx*a.c;
        a.c=a.c*a.c;
    }

    return a; //case it's 0

} //^
ComplexVariable solver::operator==(ComplexVariable a ,double b){





    return  ComplexVariable();}// ==
ComplexVariable solver::operator==(double b,ComplexVariable a )






{return  ComplexVariable();}

//ComplexVariable and ComplexVariable
ComplexVariable solver::operator+(ComplexVariable a ,ComplexVariable  b){




    return  ComplexVariable();}//+
ComplexVariable solver::operator-(ComplexVariable a ,ComplexVariable  b){





    return  ComplexVariable();}//-
ComplexVariable solver::operator/(ComplexVariable a ,ComplexVariable  b){





    return  ComplexVariable();}// /
ComplexVariable solver::operator*(ComplexVariable a ,ComplexVariable  b){




    return  ComplexVariable();}// *
ComplexVariable solver::operator==(ComplexVariable a ,ComplexVariable b){






    return  ComplexVariable();}// ==


//ComplexVariable and RealVariable
ComplexVariable solver::operator-(ComplexVariable a ,RealVariable  b){return  ComplexVariable();}//-
ComplexVariable solver::operator-(RealVariable a ,ComplexVariable b){return  ComplexVariable();}
ComplexVariable solver::operator+(ComplexVariable a ,RealVariable  b){return  ComplexVariable();}//+
ComplexVariable solver::operator+(RealVariable a ,ComplexVariable b){return  ComplexVariable();}
ComplexVariable solver::operator*(ComplexVariable a ,RealVariable  b){return  ComplexVariable();}//*
ComplexVariable solver::operator*(RealVariable a ,ComplexVariable b){return  ComplexVariable();}
ComplexVariable solver::operator/(ComplexVariable a ,RealVariable  b){return  ComplexVariable();}// /
ComplexVariable solver::operator/(RealVariable a ,ComplexVariable b){return  ComplexVariable();}
ComplexVariable solver::operator==(ComplexVariable a ,RealVariable b){return  ComplexVariable();}// ==
ComplexVariable solver::operator==(RealVariable a ,ComplexVariable b){return  ComplexVariable();}



//ComplexVariable and complexNumber
ComplexVariable solver::operator+(ComplexVariable a ,complex<double>  b){
    ComplexVariable ans=ComplexVariable();
    ans.ax_2 =a.ax_2;
    ans.bx= a.bx;
    ans.c= a.c+b;
    return ans;}//+
ComplexVariable solver::operator+(complex<double> b ,ComplexVariable a){
return solver::operator+(a,b);
}
ComplexVariable solver::operator-(ComplexVariable a ,complex<double>   b)
{
    ComplexVariable ans=ComplexVariable();
    ans.ax_2 =a.ax_2;
    ans.bx= a.bx;
    ans.c= a.c+b;
    return ans;
}



ComplexVariable solver::operator-(complex<double> b ,ComplexVariable a){
    return solver::operator-(a,b);}

ComplexVariable solver::operator/(ComplexVariable a ,complex<double>   b){

    ComplexVariable ans=ComplexVariable();
    ans.ax_2 =a.ax_2/b;
    ans.bx= a.bx/b;
    ans.c= a.c/b;
    return ans;


}//
ComplexVariable solver::operator/(complex<double> b ,ComplexVariable a){
    return solver::operator/(a,b); }
ComplexVariable solver::operator*(ComplexVariable a ,complex<double>   b){
    ComplexVariable ans=ComplexVariable();
    ans.ax_2 =a.ax_2*b;
    ans.bx= a.bx*b;
    ans.c= a.c*b;
    return ans;
            }// *
ComplexVariable solver::operator*(complex<double> b ,ComplexVariable a){
    return solver::operator*(a,b);}
ComplexVariable solver::operator==(ComplexVariable a ,complex<double>   b){





    return  ComplexVariable();}// ==
ComplexVariable solver::operator==(complex<double> a ,ComplexVariable b){







    return  ComplexVariable();}





