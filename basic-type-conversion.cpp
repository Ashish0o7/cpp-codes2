// BASIC TYPE TO CLASS TYPE CONVERSION
// 1) By Using Constructor

#include <iostream>

using namespace std;

class Time
{
private:
int hrs , min;
public:
Time(int);
void show();
};

Time :: Time(int x)
{
hrs = x / 60;
min = x % 60;
}

void Time :: show()
{
cout<<"Hours : "<< hrs <<" , Minutes : "<< min <<endl;
}

int main()
{
int duration = 74;

Time t1 = duration;

t1.show();

return 0;
}