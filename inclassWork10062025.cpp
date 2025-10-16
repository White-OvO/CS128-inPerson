#include<iostream>

using namespace std; 
int main() { 
// design a acaluclator using switch case statment .The calculator reads two numbers from the user 



int num1 , num2 = 0;
int result = 0;
char opreator ;


while ( true ){
cout<<"Enter nunber 1"<<endl; 
cin >> num1;
cout<<"Enter number 2"<<endl;
cin >> num2;

// read the opreator value 
cout << "Enter opreator value " << endl ; 
cin >> opreator ;
if (opreator  == 'x'){
    break;
}
switch(opreator)
{
case '*':
result = num1 * num2; 
break;
case '/':
result = num1 / num2; 
break;

case '+' :
result = num1 + num2; 
break;

case '-' : 
result = num1 - num2 ;
break;
case '%' :
result = num1 % num2 ;
break;

default :
cout << "Invalid operator" << endl;
break;
}
cout << num1 << opreator << num2 << "= "<< result<<endl;
}
return 0;

}
