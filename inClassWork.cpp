#include<iostream>

using namespace std;

int main () { 
int count = 0 ;

while(true) {
    cout<<"Count: " << count++ <<endl;
    break;
    cout<<"After Break" <<endl;
}
cout<<"Outside of loop" << endl; 


// in class 
int base = 0,exponent = 0; 
cout<<"Enter base ";
cin >> base;
cout<<"Enter exponent";
cin >> exponent;

int result = 1 ; 
while (exponent > 0) 
{
    result *= base;
    exponent--;
}
cout << "Result: " << result <<endl; 



int number1 = 0, digit = 0;
cout << "Enter a number: "; 
cin >> number1;

while(number1 > 0 ) 
{
    digit = number1 % 10; 
    cout << "The fetched digit is : "<<digit << endl;
    number1 /= 10;

}

int count2 = 0 ; 
while (true) 
{
    cout << "Cout is :" << count2 << endl; 

    if (count2 == 5) 
    {
        cout << "The loop itererated 5 times already!!" << endl; 
        break; 
    }
    count++;
}
cout << "The loop is done !" << endl; 




// int count3 = 0 , i = 0, j = 0 ; 

// while ( i < 10 )
// {
//     while (j<5) 
// {
//     count3++;
//     j++;
// }
// i++; 
// j = 0; 
// cout << "count is: "<< count3 << endl; 



//}
return 0;
}