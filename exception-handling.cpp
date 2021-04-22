// exception handling in C++

#include <iostream>

using namespace std;

int main()
{
int x , y;

cout<<"Enter 2 numbers : ";
cin >> x >> y;

try
{
if(y == 0)
throw 100;

int ans = x / y;
cout<<"Division of "<<x<<" and "<<y<<" is "<<ans<<endl;
}
catch(int x)
{
cout<< "Do not divide by 0" <<endl;
}

cout<<"Have a great day ahead !!! "<<endl;

return 0;
}