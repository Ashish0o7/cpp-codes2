//2) function that accepts parameters and does not return result

#include <iostream>

using namespace std;

void sum(int,int); //declaration

int main()
{
int num1 , num2;

cout<<"Enter 2 numbers : "<<endl;
cin>>num1>>num2;

sum(num1,num2);

return 0;
}

void sum(int x,int y)
{
cout<<"Sum is : "<<(x+y)<<endl;
}