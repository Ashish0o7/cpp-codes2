//CONSTRUCTOR OVERLOADING

#include <iostream>

using namespace std;

class Employee
{
private:
int empno;
public:
Employee() //Non-parameterized constructor
{
empno = 0;
}

Employee(int x) //Parameterized constructor
{
empno = x;
}

void showempno();
};

void Employee :: showempno()
{
cout<<"Empno is : "<< empno <<endl;
}

int main()
{
Employee e1; //non-parameterized constructor is called
e1.showempno();

Employee e2(23); //parameterized constructor is called
e2.showempno();

return 0;
}