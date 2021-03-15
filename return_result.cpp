//3) function that accepts does not accept parameters but returns result

#include <iostream>

using namespace std;

int sum(); //declaration

int main()
{
cout<<"Sum is : "<<sum()<<endl;

return 0;
}

int sum()
{
int num1 , num2;

cout<<"Enter 2 numbers : "<<endl;
cin>>num1>>num2;

return (num1+num2);
}