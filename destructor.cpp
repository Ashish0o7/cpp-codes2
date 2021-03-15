// Destructor :
// 1) should contain code that needs to be executed when object is destroyed
// 2) ~ CLASS_NAME() {}
// 3) Destructor never accepts any arguments.
// 4) It does not have any return type , not even void
// 5) It gets called implicitly whenever object of class is destroyed
#include <iostream>

using namespace std;

class Employee
{
private:
int salary;
public:
Employee(int);
void showdata();
~Employee(); //destructor
};


Employee :: Employee(int sal = 45) : salary(sal) {}


Employee :: ~Employee() //destructor
{
cout<<"Employee object with salary : "<<salary<<" destroyed"<<endl;
}

void Employee :: showdata()
{
cout<<"Salary : "<<salary<<endl;
}

int main()
{
Employee e1;
e1.showdata();

Employee e2(5300);
e2.showdata();

return 0;
}