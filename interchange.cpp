#include <iostream>

using namespace std;

int main()
{
int x = 15 , y = 12;

x = x + y;

y = x - y;

x = x - y;

cout<<x<<" : "<<y<<endl;
}