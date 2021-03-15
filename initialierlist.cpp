// INITIALIZER LIST

#include <iostream>

using namespace std;

class Employee
{
private:
int empno;
int salary;
public:
Employee(int,int);
void showdata();
};

Employee :: Employee(int eno,int sal) : empno(eno) , salary(sal)
{}

void Employee :: showdata()
{
cout<<"Empno : "<<empno<<" , Salary : "<<salary<<endl;
}

int main()
{
Employee e1(121,2300);

e1.showdata();

return 0;
}