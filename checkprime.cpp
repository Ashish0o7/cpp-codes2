#include <iostream>

using namespace std;

void checkprime(int); //declaration

int main()
{
int num;

cout<<"Enter value for num : "<<endl;
cin>>num;

checkprime(num);

return 0;
}

void checkprime(int x)
{
int flag = 0;

for(int i = 2 ; i <= x / 2 ; i++)
{
if(x % i == 0)
{
flag = 1;
break;
}
}

if(flag == 0)
cout<<x<<" is prime number"<<endl;
else
cout<<x<<" is not prime number"<<endl;
}

