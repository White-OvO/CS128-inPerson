#include <iostream>
using namespace std;




int main() {

    cout << " \t week 3 day 1 \t\n "<< endl;
    cout << " Variables : for example int, float, double, char, string, bool \t" << endl;
    cout << " \nOperators : +, -, *, /, %, ++, --, + \t " << endl;
    cout << " variables store data values to re use them later \t " << endl;
    cout << " \n \nstoring values , like algebra think of x = 5 . \t the x variable now stores the value of 5 \t " << endl;
    cout <<  " \t \t \t Example : \t \t \n " << endl;
    int x = 5; // variable X is now 5 . ( identifier = x )
    cout << " x = " << x << endl;// prints x 
    int y = 10;  // variable Y is now 10 .
    cout << " y = " << y << endl; // print y    
    cout << " assignment operator the equal sign = \t " << endl;
    cout << " value is what make the message print ; "; 
    cout << " data types = int , float , double , char , string , bool \t " << endl;
    cout << " understanding = the equal sign = is an assignment operator , store value in a variable \t " << endl;
    cout << " \n \n \t \t \t C ++ evalulates the right - hand side first  : \t \t \n " << endl;
    cout << " the result is store in the left hand side or also known as the variable \t " << endl;
    cout << " \n \n \t \t \t Constants  : \t "<< endl;
    cout <<" a constant is a variable that cannot be changed \t " << endl;
    cout << " use the const keyword to declare a constant \t " << endl;
    const int age = 29; // constant variable age is now 15 and cannot be
    cout << " z = " << age  << endl; // print age

    cout << " \n \n \t \t \t Data types  : \t \t \n " << endl;
    int myNum = 5;               // Integer (whole number)

    float myFloatNum = 5.99;     // Floating point number

    double myDoubleNum = 9.98;   // Double floating point number

    char myLetter = 'D';         // Character // single quotation 

    string myText = "Hello";     // String (text) // double quotation

    bool myBoolean = true;       // Boolean (true or false)

    cout << " \n \n \t \t \t Example : \t \t \n " << endl;
    cout << " Integer : " << myNum << endl; //print the variable myNum
    cout << " Float : " << myFloatNum << endl;
    cout << " Double : " << myDoubleNum << endl;
    cout << " Character : " << myLetter << endl;
    cout << " String : " << myText << endl;
    cout << " Boolean : " << myBoolean << endl;

    cout << " \n \n \t \t \t type Double: \t \t \n " << endl;
    cout << " example  \t " << endl;
  
    cout << " the result is 1 because both x and y are integers \t ";
    cout << " to get a more accurate result use type double \t " << endl;
    int a = 7 , b =4;
    double c = a / b ; // 7 / 4 = 1.75
    cout << " c = " <<  c << endl; // print c
    cout << " hello world " << std::endl;
   
  char f = 'A'; // character variable c is now A
  char c1 = f + 1; // character variable c1 is now B
    cout << " c1 = " << c1 << endl; // print c1

  
    return 0;
}
