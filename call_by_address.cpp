#include <iostream>

using namespace std;

void change(int *);

int main() //calling function
{
int x = 20;
cout<<"value of x before calling change() : "<<x<<endl;

change(&x); // call by address

cout<<"value of x after calling change() : "<<x<<endl;
return 0;
}

void change(int *y) //called function
{
*y = *y + 10;
}