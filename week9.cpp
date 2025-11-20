#include <iostream>

using namespace std;

// write your own por function called yourName_Pow()that does the same as cmath pow but you can ot use cmath pow

double yourName_Pow(double base, int exponent)
{
    double result = 1.0;

    for (int i = 0; i < exponent; i++)
    {
        result *= base; // Multiply result by base exponent times
    }

    return result;
}


    /// find the sum of the following series. uSe a function to calculate factorial

    // int factorial(int factorialMath)
    // {

    //     int resultFactorial = 1;
    //     for (int i = 0; i < factorialmath; i++)
    //     {

    //         resultFactorial  =* factorial;
    //     }
    //     return resultFactorial; 

        

        int factorial(int numberF) {
    int resultFactorial = 1;
    for (int i = 1; i <= numberF; i++) {
        resultFactorial *= i;
    }
    return resultFactorial;
}

         

int main()
{

    double base;
    int exponent;
    int ans;
    int resultFactorial; 
    int ans2; 
    int numberF;
    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the exponent ";
    cin >> exponent;

    ans = yourName_Pow(base, exponent);
    cout << ans << endl;

    cout << "Enter the number to factorial " << endl;
    cin >> numberF; 
    // add the int togther 


    ans2 = factorial(numberF); 
    cout << ans2 << endl; 

    for(int i = 1; i < = numberF; i +=2) 
    return 0;
}
/*


this array w*/