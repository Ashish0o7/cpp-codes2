// ONE CLASS TYPE TO ANOTHER CLASS TYPE (By Overloading = operator)

/*
Time t;
Minute m;
m = t;
*/

#include <iostream>

using namespace std;

class Time
{
private:
int hrs , mins;
public:
Time(int,int);
int getMinutes();
};

Time :: Time(int x,int y)
{
hrs = x;
mins = y;
}

int Time :: getMinutes()
{
return (hrs * 60 + mins);
}

class Minute
{
private:
int minutes;
public:
void show();
void operator = (Time &);
};

void Minute :: show()
{
cout<<"Total no. of Minutes are : "<< minutes <<endl;
}

void Minute :: operator = (Time &ref)
{
minutes = ref.getMinutes();
}

int main()
{
Time t1(1,23);

Minute m1;

m1 = t1; //call to the operator function

m1.show();

return 0;
}