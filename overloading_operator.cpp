// OVERLOADING << operator

#include <iostream>

using namespace std;

class MyDate
{
private:
int day , month , year;
public:
MyDate(int,int,int);
friend void operator <<(ostream &,MyDate &);
};

MyDate :: MyDate(int d,int m,int y)
{
day = d;
month = m;
year = y;
}

void operator <<(ostream &os , MyDate &d)
{
cout<< d.day <<"/0"<< d.month << "/" << d.year <<endl;
}

int main()
{
MyDate md(25,3,2021);

cout<<"The date is : ";

cout << md; //call to the operator function

return 0;
}

