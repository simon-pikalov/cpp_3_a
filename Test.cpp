// #include "doctest.h"
// #include "solver.hpp"
// #include <string>
// using namespace std;
// using namespace solver;
// #include<complex>

// TEST_CASE("RealNumbers Equation's."){
// RealVariable x;
// CHECK((abs(solve((x==0))-0) <= 0.0001));
// CHECK(  (abs(solve((x==0))-0) <= 0.0001));
// CHECK( ((abs(solve((x^2==0))-0) <= 0.0001)  ||  (abs(solve(x^2==0))-(0)) <= 0.0001));
// CHECK((abs(solve((x==-0))-0) <= 0.0001));
// CHECK((abs(solve((x+2==0))-(-2)) <= 0.0001) ); 
// CHECK((abs(solve((x-2==0))-2) <= 0.0001) ); 
// CHECK((abs(solve((4*x+2==0))-(-0.5)) <= 0.0001) ); 
// CHECK((abs(solve((4*x+4==0))-(-1)) <= 0.0001) ); 
// CHECK((abs(solve((3*x==1))-(0.33333)) <= 0.0001) ); 
// CHECK( ((((abs(solve(((x-8)*(x+2))==0)-8)) <= 0.0001)  ||  ((abs(solve(((x-8)*(x+2))==0)-(-2))) <= 0.0001))));
// CHECK((((abs(solve(((x+3)*(x-3))==0)-3) <= 0.0001)||  (abs(solve(((x+3)*(x-3))==0)-(-3)) <= 0.0001)))); 
// CHECK(((abs(solve(((x-2)*(x+2))==0)-2) <= 0.0001)||  (abs(solve(((x-2)*(x+2))==0)-(-2)) <= 0.0001)));  
// CHECK(((abs(solve((x^2)-5*x+6==0)-3) <= 0.0001)  ||  (abs(solve((x^2)-5*x+6==0)-2)) <= 0.0001)); 
// CHECK(((abs(solve((x^2)+5*x-6==0)-1) <= 0.0001)  ||  (abs(solve((x^2)+5*x-6==0)-(-6))) <= 0.0001)); 
// CHECK((abs(solve((0==x))-0) <= 0.0001));
// CHECK(((abs(solve((0==x^2))-0) <= 0.0001)  ||  (abs(solve(0==x^2))-(0)) <= 0.0001));
// CHECK((abs(solve((0==x+2))-(-2)) <= 0.0001) ); 
// CHECK((abs(solve((-2==(-1*x)))-2) <= 0.0001) ); 
// CHECK((abs(solve((4*x==-2))-(-0.5)) <= 0.0001) ); 
// CHECK((abs(solve((4*x==-4))-(-1)) <= 0.0001) ); 
// CHECK((abs(solve((x==1/3))-(0.33333)) <= 0.0001) ); 
// CHECK(((abs(solve(0==((x-8)*(x+2)))-8) <= 0.0001)||  (abs(solve(((x-8)*(x+2))==0)-(-2)) <= 0.0001)));
// CHECK(((abs(solve(0==((x+3)*(x-3)))-3) <= 0.0001)||  (abs(solve(((x+3)*(x-3))==0)-(-3)) <= 0.0001))); 
// CHECK(((abs(solve(((x-2))==-1*(x+2))-2) <= 0.0001)||  (abs(solve(((x-2)*(x+2))==0)-(-2)) <= 0.0001)));  
// CHECK(((abs(solve((x^2)==5*x-6)-3) <= 0.0001)  ||  (abs(solve((x^2)-5*x+6==0)-2)) <= 0.0001)); 
// CHECK(((abs(solve((x^2)==-5*x+6)-1) <= 0.0001)  ||  (abs(solve((x^2)+5*x-6==0)-(-6))) <= 0.0001)); 
// CHECK(((abs(solve((x+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2-(2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2)))-(-1)) <= 0.0001) )); 
// CHECK((abs(solve((x*x)==0)-(0)) <= 0.0001) );
// CHECK((abs(solve((x*x)-x==0)-(0)) <= 0.0001) );
// CHECK((abs(solve((x*x)+x+x==0)-(0)) <= 0.0001) );
// CHECK((abs(solve(x+x+x+x+x+x+x+x==8)-(-1)) <= 0.0001) );
// CHECK((abs(solve(x+x+x+x+x+x+x+x-x-x==6)-(-1)) <= 0.0001) );
// CHECK(((abs(solve((x*x)==4)-(2)) <= 0.0001) ||  (abs(solve((x*x)==4)-(-2)) <= 0.0001) )); 
// CHECK(((abs(solve((x*x)==4)-(2)) <= 0.0001) ||(abs(solve((x*x)==4)-(-2)) <= 0.0001))); 
// CHECK(((abs(solve((x*x)==4)-(2)) <= 0.0001) ||(abs(solve((x*x)==4)-(-2)) <= 0.0001) )); 
// CHECK(((abs(solve((x*x)==4)-(2)) <= 0.0001) ||(abs(solve((x*x)==4)-(-2)) <= 0.0001) )); 
// CHECK(((abs(solve(4==(x*x))-(2)) <= 0.0001) ||  (abs(solve(4==(x*x))-(-2)) <= 0.0001) )); 
// CHECK(((abs(solve(16==(x*x))-(4)) <= 0.0001) ||  (abs(solve(16==(x*x))-(-4)) <= 0.0001) )); 
// CHECK(((abs(solve(25==(x*x))-(5)) <= 0.0001) ||  (abs(solve(25==(x*x))-(-5)) <= 0.0001) )); 
// CHECK(((abs(solve(81==(x*x))-(9)) <= 0.0001) ||  (abs(solve(81==(x*x))-(-9)) <= 0.0001) )); 
// CHECK(((abs(solve(64==(x*x))-(8)) <= 0.0001) ||  (abs(solve(64==(x*x))-(-8)) <= 0.0001) )); 
// CHECK(((abs(solve(9==(4*(x^2)+5*x))-(8)) <= 0.0001) ||  (abs(solve(9==(4*(x^2)+5*x))-(-8)) <= 0.0001) )); 
// CHECK(((abs(solve((4*(x^2)+5*x)==9)-(8)) <= 0.0001) ||  (abs(solve((4*(x^2)+5*x==9))-(-8)) <= 0.0001) )); 

// }













// TEST_CASE("RealNumbers Equation's Not Legal."){
// RealVariable x;
// CHECK_THROWS(solve(2*x^3+5==6)); 
// CHECK_THROWS(solve(x^10==-6)); 
// CHECK_THROWS(solve((x^2)==-44)); 
// CHECK_THROWS(solve((x^2)==-(5)));
// CHECK_THROWS(solve((x^2)==(-1)*5));
// CHECK_THROWS(solve(-6==2*x^3+5)); 
// CHECK_THROWS(solve(-12==2*x^3+5)); 
// CHECK_THROWS(solve(-44==(x^2))); 
// CHECK_THROWS(solve(-(4)==(x^2)));
// CHECK_THROWS(solve((-1)*5==(x^2)));
// CHECK_THROWS(solve(x*x*x==0));
// CHECK_THROWS(solve((x*x)*x==0));
// CHECK_THROWS(solve((x*x)==-5));
// CHECK_THROWS(solve((x*x)==-666));
// CHECK_THROWS(solve((x*x)*(-1)*x==0));
// CHECK_THROWS(solve((-1*x*x)*(-1)*x==0));
// CHECK_THROWS(solve((-13*x*12*x)*(-1)*x==0));
// CHECK_THROWS(solve((0)*(0)*x==0));
// CHECK_THROWS(solve(0*x==0*x));
// CHECK_THROWS(solve(x-x==0*x));
// CHECK_THROWS(solve(x+x+x+x-x-x-x-x+2==0*x));
// CHECK_THROWS(solve(2==0*x));
// CHECK_THROWS(solve(2==0*x));
// }


// TEST_CASE("Complex Equation's "){
// ComplexVariable y;

// CHECK((abs(solve((y==0))-(0.0,0.0)) <= 0.0001));
// CHECK(  (abs(solve((y==0))-(0.0,0.0)) <= 0.0001));
// CHECK( ((abs(solve((y^2==0))-(0.0,0.0)) <= 0.0001)  ||  (abs(solve(y^2==0))-((0.0,0.0))) <= 0.0001));
// CHECK((abs(solve((y==-0))-(0.0,0.0)) <= 0.0001));
// CHECK((abs(solve((y+2==0))-(-(2.0,0.0))) <= 0.0001) ); 
// CHECK((abs(solve((y-2==0))-(2.0,0.0)) <= 0.0001) ); 
// CHECK((abs(solve((4*y+2==0))-((-0.5,0.0))) <= 0.0001) ); 
// CHECK((abs(solve((4*y+4==0))-((1.0,0.0))) <= 0.0001) ); 
// CHECK((abs(solve((3*y==1))-(-(0.3,0.0))) <= 0.0001) ); 
// CHECK( ((((abs(solve(((y-8)*(y+2))==0)-(8.0,0.0))) <= 0.0001)  ||  ((abs(solve(((y-8)*(y+2))==0)-((-2.0,0.0)))) <= 0.0001))));
// CHECK((((abs(solve(((y+3)*(y-3))==0)-(3.0,0.0)) <= 0.0001)||  (abs(solve(((y+3)*(y-3))==0)-((-3.0,0.0))) <= 0.0001)))); 
// CHECK(((abs(solve(((y-2)*(y+2))==0)-(2.0,0.0)) <= 0.0001)||  (abs(solve(((y-2)*(y+2))==0)-((-2.0,0.0))) <= 0.0001)));  
// CHECK(((abs(solve((y^2)-5*y+6==0)-(3.0,0.0)) <= 0.0001)  ||  (abs(solve((y^2)-5*y+6==0)-(2.0,0.0))) <= 0.0001)); 
// CHECK(((abs(solve((y^2)+5*y-6==0)-(1.0,0.0)) <= 0.0001)  ||  (abs(solve((y^2)+5*y-6==0)-((-6.0,0.0)))) <= 0.0001)); 
// CHECK((abs(solve((0==y))-(0.0,0.0)) <= 0.0001));
// CHECK(((abs(solve((0==y^2))-(0.0,0.0)) <= 0.0001)  ||  (abs(solve(0==y^2))-((0.0,0.0))) <= 0.0001));
// CHECK((abs(solve((0==y+2))-(-(2.0,0.0))) <= 0.0001) ); 
// CHECK((abs(solve((-2==(-1*y)))-(2.0,0.0)) <= 0.0001) ); 
// CHECK((abs(solve((4*y==-2))-(-(0.5,0.0))) <= 0.0001) ); 
// CHECK((abs(solve((4*y==-4))-(-(1.0,0.0))) <= 0.0001) ); 
// CHECK((abs(solve((y==1/3))-((0.33333,0.0))) <= 0.0001) ); 
// CHECK(((abs(solve(0==((y-8)*(y+2)))-(8.0,0.0)) <= 0.0001)||  (abs(solve(((y-8)*(y+2))==0)-((-2.0,0.0))) <= 0.0001)));
// CHECK(((abs(solve(0==((y+3)*(y-3)))-(3.0,0.0)) <= 0.0001)||  (abs(solve(((y+3)*(y-3))==0)-((-3.0,0.0))) <= 0.0001))); 
// CHECK(((abs(solve(((y-2))==-1*(y+2))-(2.0,0.0)) <= 0.0001)||  (abs(solve(((y-2)*(y+2))==0)-(-(2.0,0.0))) <= 0.0001)));  
// CHECK(((abs(solve((y^2)==5*y-6)-(3.0,0.0)) <= 0.0001)  ||  (abs(solve((y^2)-5*y+6==0)-(2.0,0.0))) <= 0.0001)); 
// CHECK(((abs(solve((y^2)==-5*y+6)-(1.0,0.0)) <= 0.0001)  ||  (abs(solve((y^2)+5*y-6==0)-(-(6.0,0.0)))) <= 0.0001)); 
// CHECK(((abs(solve((y+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2-(2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2+2)))-(-(1.0,0.0))) <= 0.0001) )); 
// CHECK((abs(solve((y*y)==0)-((0.0,0.0))) <= 0.0001) );
// CHECK((abs(solve((y*y)-y==0)-((0.0,0.0))) <= 0.0001) );
// CHECK((abs(solve((y*y)+y+y==0)-((0.0,0.0))) <= 0.0001) );
// CHECK((abs(solve(y+y+y+y+y+y+y+y==8)-(-(1.0,0.0))) <= 0.0001) );
// CHECK((abs(solve(y+y+y+y+y+y+y+y-y-y==6)-(-(1.0,0.0))) <= 0.0001) );
// CHECK(((abs(solve((y*y)==4)-((2.0,0.0))) <= 0.0001) ||  (abs(solve((y*y)==4)-(-(2.0,0.0))) <= 0.0001) )); 
// CHECK(((abs(solve(16==(y*y))-((4.0,0.0))) <= 0.0001) ||  (abs(solve(16==(y*y))-(-(4.0,0.0))) <= 0.0001) )); 
// CHECK(((abs(solve(25==(y*y))-((5.0,0.0))) <= 0.0001) ||  (abs(solve(25==(y*y))-(-(5.0,0.0))) <= 0.0001) )); 
// CHECK(((abs(solve(81==(y*y))-((9.0,0.0))) <= 0.0001) ||  (abs(solve(81==(y*y))-(-(9.0,0.0))) <= 0.0001) )); 
// CHECK(((abs(solve(64==(y*y))-((8.0,0.0))) <= 0.0001) ||  (abs(solve(64==(y*y))-(-(8.0,0.0))) <= 0.0001) )); 
// CHECK(((abs(solve(9==(4*(y^2)+5*y))-((8.0,0.0))) <= 0.0001) ||  (abs(solve(9==(4*(y^2)+5*y))-(-(-8.0,0.0))) <= 0.0001) )); 
// CHECK(((abs(solve((4*(y^2)+5*y)==9)-((8.0,0.0))) <= 0.0001) ||  (abs(solve((4*(y^2)+5*y==9))-(-(-8.0,0.0))) <= 0.0001) ));  
// CHECK((solve((y^2) == 16)==((-4.0,0.0))||solve((y^2) == 16)==((4.0,0.0)) )) ;   // 4+0i or -4+0i
// CHECK((solve((y^2)+2*y+4 == 20)==((-4.0,0.0))|| solve((y^2)+2*y+4 == 20)==((4.0,0.0))) ) ;   // 4+0i or -4+0i
// CHECK((solve((y^2) == 16)==(solve((y^2)+2*y+4 == 20)))) ;   // 4+0i or -4+0i
// CHECK((solve((y^2)==-1))==(-1.0,0.0) ) ;   // 4+0i or -4+0i


    

// }


