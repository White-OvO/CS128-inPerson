#include <iostream> 

#include <cmath> 
int elementSize = 4; 
using namespace std ; 

//Will look for the int we are looking for 
int frequency(int arr[], int size, int key) {
    int count = 0;  // initialize counter
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {   
            count++;
        }
    }
    return count; // will print out how many times we have found the number in the array . 
}


// swap the array 
void reverseArray(int arr[],int size2 )  { 
// this is an array of 5 
for ( int i = 0; i < size2 / 2 ; i ++ ) { 
std :: swap (arr[i],arr[size2- i - 1]) ; 
}
}

/*

    for (int i = 0; i < size / 2; i++) {
        std::swap(arr[i], arr[size - i - 1]);
    }
}
*/



int main ()  { 
int key = 0;
int result = 0;
int arr[5];
int output  =0 ;
int reverseNum[5]; 
const int size = 5;
//int arr[size] = {1, 2, 3, 4};
for ( int j=0; j< 5; j++) { 
cin >> arr[j];


}

cout << "Enter key to search: ";
    cin >> key;

result = frequency(arr, size, key);
cout << "The frequency of " << key << " is " << result << " times." << endl;






cout << "Enter the 5 Numbs to reverse : " ; 
for ( int i = 0; i < size ; i ++ ) { 


cin >> reverseNum[i] ; 

}


    // Reverse second array
    reverseArray(reverseNum, size);
   cout << "Reversed array: ";
    // Output reversed array
 
    for (int i = 0; i < size; i++) {

        cout << reverseNum[i] << " " ;  
       }
   //    
    
    cout << endl;


    return 0;
}

/*
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

*/



/// revrse an array ) function + lop ) 

// write a function ( reverseArray(int arr[],int size ) 
// this will reverse of an array in place ( no extra array ) 

// use a loop to swap elements 

// in main() , read 5 integerss, call the cunction and print thereversed array 




//int countOccurrences() {
// int numberLookingFor = 0; 
// cout <<"Enter element " ;
// cin >> numberLookingFor; 
// cout << "\nYou entered:\n";
//     for (int i = 0; i < elementSize; i++) {
//         cout << " Element" << i << " : " << numberLookingFor[i] << endl;
//     }



//     return 0; 
