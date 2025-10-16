#include <iostream> 
#include <cmath> 
using namespace std;




int main() {


int num1;


// write the sum of the digit of a number using while loop 
cout << "Enter a number to get the sum of its digits " << endl;
cin >> num1;

if (num1 < 0) {
        cout << "Please enter a positive number." << endl;
        return 0; // Exit the program with an error code
    }
// if (num < 1 || num > 5) {
int digits= 0;
int finalsum = 0;
while (num1  > 0)  {

     digits= num1 % 10 ; // will get you the last digit of the number 
    finalsum= finalsum + digits; 
    num1 = num1 / 10;
    
    
    
 }
 cout << "The sum of the digits is " << finalsum << endl;

    return 0; 
}