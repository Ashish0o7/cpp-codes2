// Constructor : special member function :-
// 1) its name is going to be same as that of class
// 2) it will not have any return type , not even void
// 3) it will get called automatically , whenever object of class is created

// Why :- It is used to initialize object(i.e. data members of object) at the time of object creation

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

void showempno();
};

void Employee :: showempno()
{
cout<<"Empno is : "<< empno <<endl;
}

int main()
{
Employee e1; //constructor is called

e1.showempno();

return 0;
}