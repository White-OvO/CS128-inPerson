#include<iostream> 
// attempt in class 

//using namespacer std; 
using namespace std;
int main () { 
int choice[5]; 
int searchNum;
for ( int i = 0;  i < 5 ; i++) { 
    cout << "Enter number " << i + 1 << " :" << endl; 
    cin >> choice[i];
  //  cout << choice[i] << endl;
}

cout << "\nEnter number you want to search" << endl; 
cin >> searchNum;
    if ( searchNum == choice[i]) { 
    cout <<"The number you are searching for is: " << searchNum << endl; 
    cout << "\n" <<searchNum << " is in the array at" + i ; 
    cout << "\n" <<searchNum << " is in the array " ; 

}
// if(searchNum != choice [i]) 
//     {
//     cout << searchNum << " is not in the array " << endl; 
//     }
        return 0; 
}