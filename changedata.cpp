#include <iostream>

using namespace std;

class ABC
{
private:
static int x;
public:
void showdata();
void changedata(int);
};

int ABC :: x;

void ABC :: changedata(int y)
{
x = y;
}

void ABC :: showdata()
{
cout<<"Value of x is : "<<x<<endl;
}

int main()
{
ABC obj1 , obj2;
obj1.changedata(34);

obj2.changedata(56);

obj1.showdata();

return 0;
}