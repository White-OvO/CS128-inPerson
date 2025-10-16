#include <iostream>
#include <iomanip>
#include <ios>
#include <string>
using namespace std;

int main() {
int var1,var2,var3 = 0; 
cout<<"Enter three variables 0 or 1 \n**" ;
cin >> var1;
cin >> var2;
cin >> var3;


if (var1 == 0 && var2 == 0 && var3 == 0) {
        cout << "Violet\n";
}
if (var1 == 0 && var2 == 0 && var3 == 1) {
        cout << "Indigo\n";
}
if (var1 == 0 && var2 == 1 && var3 == 0) {
        cout << "Blue\n";
}
if (var1 == 0 && var2 == 1 && var3 == 1) {
        cout << "Green\n";
}
if (var1 == 1 && var2 == 0 && var3 == 0) {
        cout << "Yellow\n";
}
if (var1 == 1 && var2 == 0 && var3 == 1) {
        cout << "Orange\n";
}
if (var1 == 1 && var2 == 1 && var3 == 0) {
        cout << "Red\n";
}
if (var1 == 0 && var2 == 0 && var3 == 0) {
        cout << "Whitet\n";
}
    return 0 ; 
}
