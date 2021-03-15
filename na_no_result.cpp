//4) function that accepts does not accept parameters and does not return result

#include <iostream>

using namespace std;

void sum(); //declaration

int main()
{
sum();
return 0;
}

void sum()
{
int num1 , num2;

cout<<"Enter 2 numbers : "<<endl;
cin>>num1>>num2;

cout<<"Sum is : "<<(num1+num2)<<endl;
}