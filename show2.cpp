#include <iostream>

using namespace std;

void show(int x,int y = 100,int z = 200) // y,z are default arguments here
{
cout<<"show() called with params "<<x<<" and "<<y<<" and "<<z<<endl;
}

int main()
{
show(12);
show(34,45);
return 0;
}