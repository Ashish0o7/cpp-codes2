//If programmer has not written any constructor in class , then the compiler itself adds a non-parameterized and empty constructor in the class. Which is called as "Default Constructor"


#include <iostream>

using namespace std;

class Employee
{
private:
int empno;
public:
void setempno(int);
void showempno();
};

void Employee :: setempno(int x)
{
empno = x;
}

void Employee :: showempno()
{
cout<<"Empno is : "<< empno <<endl;
}

int main()
{
Employee e1; //default constructor is called

e1.setempno(23);
e1.showempno();

return 0;
}

