// CLASS TYPE TO BASIC TYPE (Using Conversion Function)

/*
Time t;
int duration = t;
*/

#include <iostream>

using namespace std;

class Time
{
private:
int hrs , mins;
public:
Time(int,int);
void show();
operator int(); //conversion function
};

Time :: Time(int x,int y)
{
hrs = x;
mins = y;
}

void Time :: show()
{
cout<<"Hours : "<< hrs <<" , Minutes : "<< mins << endl;
}

Time :: operator int()
{
return (hrs * 60 + mins);
}

int main()
{
Time t1(1,53);
cout<<"Time details are : "<<endl;
t1.show();

int duration = t1; //conversion function called

cout<<"Duration details are : "<< duration <<" minutes"<<endl;

return 0;
}
