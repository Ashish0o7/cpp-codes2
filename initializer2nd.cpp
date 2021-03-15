// INITIALIZER LIST : 2nd Case
// to initialize const data member

#include <iostream>

using namespace std;

class Employee
{
private:
const int salary;
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
Employee e1(2300);

e1.showdata();

return 0;
}

