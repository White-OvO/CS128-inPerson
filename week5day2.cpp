#include <iostream>
#include <string>
#include <cmath> 

using namespace std;
int main () { 
// if its friday AND if my homework is done OR 
// if it is not a weekend AND if i am NOT lazy 
// Then I will go to the concert 
//
// variable c is decision 

// c = F && H || !w && !L 

//boolean example 

bool A = true ; 
cout << A << std::endl;  /// 1 


bool B = 5 < 2; 
cout << B << std::endl; // 0 becuase its false 



// char c1 = 'F'; 
// char c2 = 'R'; 
// char c3 = c1 == c2; //coming out f since its comparing 


// bool c3 = c1 = c2; 
// cout <<  c3 ; 

// rewrite this above ^ before if statment in C++ 

// char f1 = 'F' ;
// char f2 = 'R';

// if ( c2 == c2 )
// { 
//     cout<<"both are the same " >> endl; 

// }









/// Todays problem 

//Declar two integers variables a and b 
// prompt the user to give values for a and b 

int varA ; 
int varB ; 
// variable input for A 
cout<<"Enter the variable for A : "<<std::endl; 
cin >> varA ; 


// variable input for B 
cout<<"Enter the variable for B : "<<std::endl; 
cin >> varB ; 

// check if its greater than B  and print out the condition for the var a being greater than var b 



if (varA > varB) { 
    cout <<"Variable A : " <<varA << " is greater than Variable B: "<< varB << std::endl; 

}

else { 
    cout<<"Your variable A is less than variable B " << std::endl; 

}
//  if im hungry ANS  if mom. cooks OR  dad brings take out i will eat . 

// print i will eat based on this condition 

bool ans;
bool momCooked; 
bool dadTakeOut;

cout << "\n Are you hungry ? "; 

cin >> ans ; 


cout<<"\nHas mom cooked?  "<< std::endl; 
cin>>momCooked;


cout<<"\nDid dad bring take out? "<< std::endl; 
cin>>dadTakeOut; 


cout << "\nyour ans : " << ans << "\n Are you Hungry ? "<< ans <<"\n Has mom cooked ? " << momCooked; 

if (cin.fail()) { 
    cout<<"Invalid Number \n" << std::endl; 
}


if (ans && (momCooked || dadTakeOut) ) {
    cout<<" I will eat"<< std::endl;
}
else { 
    cout <<"I am not eatting "<< std::endl;

}

    return 0; 
}