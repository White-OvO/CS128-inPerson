#include <iostream>
#include <iomanip>
#include <ios>
#include <string>
using namespace std;

int main() {




cout << "\n \t Checking Account "; 
double intialbalance =100.00; // intial balance on the account 
int deposit, withdraw, checkBalance ;// declare 3 int variables 
int selection = 0;
int newbalance ;
// Asking for the user to select one of the three options 1 for deposit , 2 for withdraw 
// or 3 for withdraw 
cout<<"Select from the following options \n";
cout << "Deposit : 1 \nWithdraw : 2 \nCheckBalance : 3 \n";
cin >> selection;

switch (selection) {
    
    case 1 : 
    cout << "Enter the deposit amount\n**";
    cin >> deposit;
    newbalance =intialbalance + deposit;
    cout << "Current Balance: "<< newbalance ;

    break;

    case 2 : 
    cout << "Enter amount of withdraw\n**" ;
    cin >> withdraw;
    newbalance = withdraw - intialbalance; 
        if (withdraw >  intialbalance) {
            cout << "Not enough balance in account";
         } else {
        intialbalance -= withdraw ; 
        cout<<intialbalance;
        }
    break; 

    case 3 : 
    cout << "Balance : "<< intialbalance; 
    break; 
        default : 
    cout<<"Invalid Seletion!\n";
}






    cout << "\t Todays problem" << std::endl;

    // today's problem
    int x = 0;       // Declare and initialize x
//    int evenNum = 0;
    cout << "Enter A number greater than 0:" ; 
    cin >> x;

if (x<0) {
    cout<<"Number is not greater than 0." ; 
} else if (x > 0) { // making sure its over 0 
    if (x % 2 == 0) { //checking if its even 
        x *= 10;  // Multiply x by 10
        cout << x << " is even" << endl;
        } else { // else its odd 
        x += 5;   // Add 5 to x
        cout << x << " is odd" << endl;
        }
    }
/// problem 2 

    return 0;
}



