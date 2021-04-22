#include <iostream>

using namespace std;

int main()
{
double d = 2.3;
char ch = 'A';
int x = 20;

d = d + ch + x; // 2.3 + 65.0 + 20.0

int y = d + ch + x; // 87.3 + 65.0 + 20.0

cout<<"value of d is : "<< d << endl;
cout<<"value of y is : "<< y << endl;

return 0;
}