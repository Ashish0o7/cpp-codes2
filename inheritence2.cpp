#include <iostream>

using namespace std;

class Employee
{
protected:
void show()
{
cout<<"Employee's show() called"<<endl;
}
public:
void display()
{
cout<<"Employee's display() called"<<endl;
}
};

class Manager : public Employee
{
public:
void print()
{
show();
cout<<"Manager's print() called"<<endl;
}
};

int main()
{
Manager mgr;

//mgr.show(); compile time error
mgr.display();
mgr.print();

return 0;
}