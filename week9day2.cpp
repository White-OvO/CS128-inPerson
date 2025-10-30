#include <iostream>
using namespace std ; 








// read 10 numbers from user in a array and then print the array in a reverse order we do not have to chagne the position 



int main () { 
    int arr1[10] ; 
    int sum = 0 ; 
    int oddCount = 0;
    int evenCount = 0 ; 
  
    cout << "Enter 10 numbers " << endl; 
    for (int i = 0; i < 10; i++) {
    cin >> arr1[i]; 
    sum += arr1[i];

    }
   
    for ( int i = 9 ; i > 0; i--)

    cout << "The numbers are " << arr1[i] << endl; 
    cout << "The sum of this array is "<< sum << endl; 

// pring the sum of the elements in an array 

//step 3 : print if the pattern extis inthe string. and id so, then print the string substring starting from the begining of the string to the end of the pattern . 
// print the numbers that are odd and print the numbers that are even 


for (int i =0 ; i < arr1[i]; i++) { 
   
    if (arr1[i] % 2 == 0) { 

        evenCount ++;
       // cout << arr1[i] << " is even number " << endl; 
    }
    else
    {
        oddCount ++;
    }


    }
            cout << "Total amount of even numbers " << evenCount; 
            cout << "\n" <<endl ; 
             cout << "Even numbers from the array are : " << oddCount ; 

            cout << "\n" << endl; 

for (int i = 0; i < arr1[i]; i ++ ) { 
   int maxNum = arr1[0]; 
   int minNum = arr1[0];
      if (arr1[i] > maxNum) {
            maxNum = arr1[i];
        }


      cout << "Max Num is " << maxNum <<endl;
            // print the max and the minnimum of an array 
  if (arr1[i] < maxNum) { 
    minNum = arr1[i];
  }
  cout <<" Min number is " << minNum << endl;
}
  return 0;               
}








/*


    for ( int i = 9 ; i > 0; i--)


*/

