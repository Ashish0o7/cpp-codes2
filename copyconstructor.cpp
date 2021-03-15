// Whenever an object of class is created using another object of the same class // copy constructor is called

// What is the use? :-
// Copy constructor is used to initialize an object(initializing data members of the object) using another object of the same class.


#include <iostream>

using namespace std;

class Employee
{
private:
int empno;

public:
Employee();
void showempno();
};

Employee :: Employee() //non-parameterized constructor
{
empno = 11;
}

void Employee :: showempno()
{
cout<<"Empno is : "<< empno <<endl;
}

int main()
{
Employee e1;

Employee e2 = e1; // compiler's copy constructor called

e2.showempno();

return 0;
}