#include <iostream>

using namespace std;

class Employee
{
public:
void calculate_salary()
{
cout<<"salary calculated"<<endl;
}
};

class Manager : public Employee // Manager IS - A Employee
{
public:
void calculate_incentive()
{
cout<<"incentive calculated"<<endl;
}
};

int main()
{
Manager mgr;
cout<<"For Manager ";
mgr.calculate_salary();

cout<<"For Manager ";
mgr.calculate_incentive();

Employee emp;
cout<<"For Employee ";
//emp.calculate_incentive(); compile time error
emp.calculate_salary();

return 0;
}