#include <iostream>
#include <string>
#include <cmath> 

using namespace std;

int main()  
{ 
int a ; 

// syntax error 


//initalize the variable 
int b = 5; 


cout << " int b = " << b << endl; // value is undifined


// f(x) = 2x^2 + 3x +5 ( plug in any value for x for result ) 


// sqrt ( num ) - square root of a number 

int num2 = 25 ; 
int sq_root = sqrt (num2); 
cout << " square root of " << num2 << " is "<< sq_root<< endl; 


// pow function 
// power of something 

int numPower = 25 ; 
int power = pow (numPower, 2); // powe(base, power)

cout<<" the square of " << numPower << " is " << power << endl;

// sin function 

cout << sin(90) << endl;  // conver degress to radians 


cout << " midulus operator " ;
int q = 70; 
int q2 = q / 8 ; 
int rem = q % 8 ;
cout << "\n \t  the result of 70 / 8 is " << q2 << " with a remainder of " << rem << endl;


// BODMAS 
// Brackets , Orders ( i.e. powers and square roots, etc. ), Division and Multiplication, Addition and Subtraction
// Order of operation 
// 5 + 6 * 2 

// this is the order for the operation . to evaliation 

//asignment operator = 
// = , += , -= , *= , /= , %=



///logical operators 
// && , || , !
// two conditions true or false and we check them 
// && (and )
// || ( or ) 



//relations operators ( if statments )
// == , != , > , < , >= , <=

// operators and opren 
// symbols are opreators 
// + - * / % ++ --

//a ++ 
// this is the storing of a = a + 1

// ++a -> pre-increment
// a++ -> post-increment
//--b -> pre-decrement
/* check slide for correction 
cout<<"\t\t \n\nPre-increment"<<endl;

int  a1 = 5 , b1 = 5 , c, d ; 

c = a; 
d = b ; 
// pre - increment 
cout << " pre -increment of a is : " << ++a << endl;

//post increament 

cout << " post -increment of b is : " << b++ << endl;
cout<< " current value of b = " << b << endl;

*/




return 0 ; 
}

/* 
literal - number we are proving to the variable. 
A string  = " Hello " were hello is the literal 

datda types 
- Short 
- long 
- long long ( used when working with large numbers ) 

-unsigned int -> only stores non-negative number ( doublees 
the positive range ) 
the unsigned int only store non negative numbers . 



binary to decimal   * explamation 
ex : ( 3 bit ) 
110 to a decimal 
 1 * 2^2 + 1 * 2^1 
 0 * 2^0 
 
 4 + 2 + 0 = 6


011 
incase of unassigned number 
1  2 ^ 0 + 1 * 2 ^ 1 + 0 


BINARY TO DECIMAL 

110 
left most bit is for sign ( 1 is negative ) 
other wise 0 it is a positive number 
step 2 : convert whole number just flip them . 
001 


declaration - declaring a variable 
data type + identifier ( name of variable )

int var; 
char c; 

variable - > a named memory location that stores data 

assignment -> stores a value in a variable


*/