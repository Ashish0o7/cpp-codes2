// ONE CLASS TYPE TO ANOTHER CLASS TYPE (Using Constructor)

/*
Time t;
Minute m = t;
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
Minute(Time &);
void show();
};

Minute :: Minute(Time &ref)
{
minutes = ref.getMinutes();
}

void Minute :: show()
{
cout<<"Total no.of minutes are : "<< minutes <<endl;
}

int main()
{
Time t1(2,34);

Minute m1 = t1; // same as Minute m1(t1);

m1.show();

return 0;
}

