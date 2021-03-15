#include <iostream>

using namespace std;

int main()
{
int num , temp;
int rem , rev = 0;

cout<<"Enter a number : "<<endl;
cin>>num;

temp = num;

while(num > 0)
{
rem = num % 10;
rev = rev * 10 + rem;
num = num / 10;
}

if(rev == temp)
cout<<temp<<" is palindrome"<<endl;
else
cout<<temp<<" is not palindrome"<<endl;

return 0;
}