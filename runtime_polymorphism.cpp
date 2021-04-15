//Runtime Polymorphism , Dynamic Binding , Late Binding

#include <iostream>

using namespace std;

class Employee
{
public:
virtual void calculate_salary() //overriden function
{
cout<<"Employee's salary calculated"<<endl;
}
};
class Worker : public Employee
{
public:
void calculate_salary() //overriding function
{
cout<<"Worker's salary calculated"<<endl;
}
};

int main()
{
Employee *emp;
Worker obj;
emp = &obj;
emp->calculate_salary();
return 0;
}