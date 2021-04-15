#include <iostream>

using namespace std;

int main()
{
int *num1 = new int;
int *num2 = new int;

cout<<"Enter first number : ";
cin >> *num1;

cout<<"Enter second number : ";
cin >> *num2;

int ans = *num1 + *num2;

cout<<"Sum is : "<< ans <<endl;

delete num1;
delete num2;

return 0;
}