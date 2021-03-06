//
// Created by sam on 20/04/2020.
//

#ifndef A_3_SOLVER_HPP
#define A_3_SOLVER_HPP

#include <iostream>
using namespace::std;
#include <complex>
namespace solver
{
class RealVariable {
public:
double ax_2;
double bx;
double c;

public :
    RealVariable();
    ~RealVariable();

};

class ComplexVariable {
   public:
   complex<double>  ax_2;
   complex<double> bx;
   complex<double> c;

public :
    ComplexVariable();
    ~ComplexVariable();


};





double round(double toRound);



complex<double> solve(ComplexVariable comp);
double solve(RealVariable real);//RealVariable



ostream& operator<< (ostream& os,ComplexVariable c);
ostream& operator<< (ostream& os,RealVariable r);

//double and RealVariable
RealVariable operator*(RealVariable a ,double b); //  *
RealVariable operator*(double b,RealVariable a );
RealVariable operator-(RealVariable a ,double b);//  -
RealVariable operator-(double b,RealVariable a );
RealVariable operator+(RealVariable a ,double b);//  +
RealVariable operator+(double b,RealVariable a );
RealVariable operator/(RealVariable a ,double b);//  /
RealVariable operator/(double b,RealVariable a );
RealVariable operator^(RealVariable a ,double b);
RealVariable operator==(RealVariable a ,double b);    //  ==
RealVariable operator==(double b,const RealVariable a );

//RealVariable and RealVariable
RealVariable operator+(RealVariable a ,RealVariable  b); //  +
RealVariable operator-(RealVariable a ,RealVariable  b); //  -
RealVariable operator/(RealVariable a ,RealVariable  b);//  /
RealVariable operator*(RealVariable a ,RealVariable  b); //*
RealVariable operator==(const RealVariable a ,const RealVariable b); //==

//ComplexVariable and double
ComplexVariable operator*(ComplexVariable a ,double b); // *
ComplexVariable operator*(double b,ComplexVariable a ); 
ComplexVariable operator-(ComplexVariable a ,double b);// -
ComplexVariable operator-(double b,ComplexVariable a );
ComplexVariable operator+(ComplexVariable a ,double b);// +
ComplexVariable operator+(double b,ComplexVariable a );
ComplexVariable operator/(ComplexVariable a ,double b);// /
ComplexVariable operator/(double b,ComplexVariable a );
ComplexVariable operator^(ComplexVariable a ,double b); //^
ComplexVariable operator==(ComplexVariable a ,double b);// ==
ComplexVariable operator==(double b,ComplexVariable a );

//ComplexVariable and ComplexVariable
ComplexVariable operator+(ComplexVariable a ,ComplexVariable  b);//+
ComplexVariable operator-(ComplexVariable a ,ComplexVariable  b);//-
ComplexVariable operator/(ComplexVariable a ,ComplexVariable  b);// /
ComplexVariable operator*(ComplexVariable a ,ComplexVariable  b);// *
ComplexVariable operator==(ComplexVariable a ,ComplexVariable b);// ==


//ComplexVariable and RealVariable
ComplexVariable operator-(ComplexVariable a ,RealVariable  b);//-
ComplexVariable operator-(RealVariable a ,ComplexVariable b);
ComplexVariable operator+(ComplexVariable a ,RealVariable  b);//+
ComplexVariable operator+(RealVariable a ,ComplexVariable b);
ComplexVariable operator*(ComplexVariable a ,RealVariable  b);//*
ComplexVariable operator*(RealVariable a ,ComplexVariable b);
ComplexVariable operator/(ComplexVariable a ,RealVariable  b);// /
ComplexVariable operator/(RealVariable a ,ComplexVariable b);
ComplexVariable operator==(ComplexVariable a ,RealVariable b);// ==
ComplexVariable operator==(RealVariable a ,ComplexVariable b);



//ComplexVariable and complexNumber
ComplexVariable operator+(ComplexVariable a ,complex<double>  b);//+
ComplexVariable operator+(complex<double> a ,ComplexVariable b);
ComplexVariable operator-(ComplexVariable a ,complex<double>   b);//-
ComplexVariable operator-(complex<double> a ,ComplexVariable b);
ComplexVariable operator/(ComplexVariable a ,complex<double>   b);//
ComplexVariable operator/(complex<double> a ,ComplexVariable b);
ComplexVariable operator*(ComplexVariable a ,complex<double>   b);// *
ComplexVariable operator*(complex<double> a ,ComplexVariable b);
ComplexVariable operator==(ComplexVariable a ,complex<double>   b);// ==
ComplexVariable operator==(complex<double> a ,ComplexVariable b);








}


#endif //A_3_SOLVER_HPP