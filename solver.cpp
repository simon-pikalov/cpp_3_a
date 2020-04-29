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


RealVariable::RealVariable() {
    this->ax_2=0;
    this->bx=0;
    this->c=0;
}

RealVariable::~RealVariable() {

}

ComplexVariable::ComplexVariable() {
    this->ax_2=0;
    this->bx=0;
    this->c=0;
}

ComplexVariable::~ComplexVariable() {

}



double solver::solve(RealVariable real) {return 666;}
complex<double> solver::solve(ComplexVariable comp) {return 666i;}


//double and RealVariable
RealVariable solver::operator*(RealVariable a ,double b){return  RealVariable();} //  *
RealVariable solver::operator*(double b,RealVariable a ){return  RealVariable();} 
RealVariable solver::operator-(RealVariable a ,double b){return  RealVariable();} //  -
RealVariable solver::operator-(double b,RealVariable a ){return  RealVariable();} 
RealVariable solver::operator+(RealVariable a ,double b){return  RealVariable();} //  +
RealVariable solver::operator+(double b,RealVariable a ){return  RealVariable();} 
RealVariable solver::operator/(RealVariable a ,double b){return  RealVariable();} //  /
RealVariable solver::operator/(double b,RealVariable a ){return  RealVariable();} 
RealVariable solver::operator^(RealVariable a ,double b){return  RealVariable();} 
RealVariable solver::operator==(RealVariable a ,double b){return  RealVariable();}     //  ==
RealVariable solver::operator==(double b,const RealVariable a ){return  RealVariable();}

//RealVariable and RealVariable
RealVariable solver::operator+(RealVariable a ,RealVariable  b){return  RealVariable();} //  +
RealVariable solver::operator-(RealVariable a ,RealVariable  b){return  RealVariable();} //  -
RealVariable solver::operator/(RealVariable a ,RealVariable  b){return  RealVariable();}//  /
RealVariable solver::operator*(RealVariable a ,RealVariable  b){return  RealVariable();}//  *
RealVariable solver::operator==(RealVariable a ,const RealVariable b){return  RealVariable();} //==

//ComplexVariable and double
ComplexVariable solver::operator*(ComplexVariable a ,double b){return  ComplexVariable();} // *
ComplexVariable solver::operator*(double b,ComplexVariable a ){return  ComplexVariable();} 
ComplexVariable solver::operator-(ComplexVariable a ,double b){return  ComplexVariable();}// -
ComplexVariable solver::operator-(double b,ComplexVariable a ){return  ComplexVariable();}
ComplexVariable solver::operator+(ComplexVariable a ,double b){return  ComplexVariable();}// +
ComplexVariable solver::operator+(double b,ComplexVariable a ){return  ComplexVariable();}
ComplexVariable solver::operator/(ComplexVariable a ,double b){return  ComplexVariable();}// /
ComplexVariable solver::operator/(double b,ComplexVariable a ){return  ComplexVariable();}
ComplexVariable solver::operator^(ComplexVariable a ,double b){return  ComplexVariable();} //^
ComplexVariable solver::operator==(ComplexVariable a ,double b){return  ComplexVariable();}// ==
ComplexVariable solver::operator==(double b,ComplexVariable a ){return  ComplexVariable();}

//ComplexVariable and ComplexVariable
ComplexVariable solver::operator+(ComplexVariable a ,ComplexVariable  b){return  ComplexVariable();}//+
ComplexVariable solver::operator-(ComplexVariable a ,ComplexVariable  b){return  ComplexVariable();}//-
ComplexVariable solver::operator/(ComplexVariable a ,ComplexVariable  b){return  ComplexVariable();}// /
ComplexVariable solver::operator*(ComplexVariable a ,ComplexVariable  b){return  ComplexVariable();}// *
ComplexVariable solver::operator==(ComplexVariable a ,ComplexVariable b){return  ComplexVariable();}// ==


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
ComplexVariable solver::operator+(ComplexVariable a ,complex<double>  b){return  ComplexVariable();}//+
ComplexVariable solver::operator+(complex<double> a ,ComplexVariable b){return  ComplexVariable();}
ComplexVariable solver::operator-(ComplexVariable a ,complex<double>   b){return  ComplexVariable();}//-
ComplexVariable solver::operator-(complex<double> a ,ComplexVariable b){return  ComplexVariable();}
ComplexVariable solver::operator/(ComplexVariable a ,complex<double>   b){return  ComplexVariable();}//
ComplexVariable solver::operator/(complex<double> a ,ComplexVariable b){return  ComplexVariable();}
ComplexVariable solver::operator*(ComplexVariable a ,complex<double>   b){return  ComplexVariable();}// *
ComplexVariable solver::operator*(complex<double> a ,ComplexVariable b){return  ComplexVariable();}
ComplexVariable solver::operator==(ComplexVariable a ,complex<double>   b){return  ComplexVariable();}// ==
ComplexVariable solver::operator==(complex<double> a ,ComplexVariable b){return  ComplexVariable();}




