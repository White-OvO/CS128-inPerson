#include <iostream> 
#include <cmath>
#include <cstdlib> 


using namespace std;



 
int main () { 
    cout << "Guess the number 1 - 10 : " << endl ; 
  //random number from 1 - 10 

srand(time(0));
int userInput ; 
cin >> userInput;
// make sure the number is 1 - 10  
int randNumb = rand() % 10 + 1; // number 1 - 10 

 cout << "Random numner is " << randNumb << endl; 
while ( userInput != randNumb ) 
{
    cout << "you are so close " << endl; 
  

    if (userInput > randNumb) 
        cout << "To high think lower" << endl; 
    
    else if (userInput < randNumb)  
        cout << "To low think higher" << endl; 
    
  cin >> userInput;
}
cout << "Correct number !" << endl; 
    return 0 ; 
}

// randonly generate a nunmber between 1 and 10 ( inclcusive ) 
//use do  while to ask the user to gueses the number. 


// write a program to check if number is a prime number . read the number using getline
// and convert it to integer. Do proper exception handling. 
