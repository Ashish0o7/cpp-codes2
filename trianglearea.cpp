#include <iostream>
#include <cmath>

using namespace std;

class Triangle
{
private :
int a,b,c;

public :

void getdata();
void showarea();
void showperi();
};

void Triangle :: getdata()
{
cout<<"Enter 3 sides of triangle : "<<endl;
cin>>a>>b>>c;
}

void Triangle :: showperi()
{
cout<<"Perimeter of the triangle is "<<(a+b+c)<<endl;
}

void Triangle :: showarea()
{
int pr = (a+b+c)/2;
float area = sqrt(pr * (pr-a) * (pr-b) * (pr-c));
cout<<"Area of triangle is : "<<area<<endl;
}

int main()
{
Triangle obj;
obj.getdata();
obj.showperi();
obj.showarea();
return 0;
}