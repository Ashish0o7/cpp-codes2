#include <iostream>
using namespace std;
float area(float);
float circum(float);
int main()
{
float r;
cout<<"Enter radius of circle\n";
cin>>r;

cout<< "Area of circle : "<<area(r)<<endl;

cout<< "circumference of circle : "<<circum(r);
return 0;
}
float area(float r)
{
return (3.14 * r * r);
}
float circum(float r)
{
return(6.28 * r);
}

