// INITIALIZER LIST : 3rd Case
// to initialize reference data member

#include <iostream>

using namespace std;

class Employee
{
private:
int &salary;
public:
Employee(int);
void showdata();
};


Employee :: Employee(int sal) : salary(sal) {}


void Employee :: showdata()
{
cout<<"Salary : "<<salary<<endl;
}

int main()
{
int x = 2300;

Employee e1(x);

e1.showdata();

return 0;
}

