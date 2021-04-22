// Pure Virtual Function , Abstract class

#include <iostream>

using namespace std;

class Employee // abstract class
{
public:
virtual void check_insurance_policy() = 0; //pure virtual function
};

class Worker : public Employee
{
public:
void check_insurance_policy()
{
cout<<"insurance policy checked for worker"<<endl;
}
};

class Manager : public Employee
{
public:
void check_insurance_policy()
{
cout<<"insurance policy checked for manager"<<endl;
}
};

int main()
{
Employee *emp;

Worker obj;
emp = &obj;
emp->check_insurance_policy();

Manager mgr;
emp = &mgr;
emp->check_insurance_policy();

//Employee emp; compile time error as Employee is abstract class

return 0;
}