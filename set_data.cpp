/*
1) Friend Function :-
Friend function is such a function that can access private and protected members of class though it is not member of that class.
*/

#include <iostream>

using namespace std;

class ABC; //forward declaration of class ABC

class PQR
{
public:
void display(ABC);
};

class ABC
{
private:
int x;

public:
void setdata(int);
friend void PQR :: display(ABC);
};

void ABC :: setdata(int y)
{
x = y;
}

void PQR :: display(ABC ref)
{
cout<<"value of x is "<< ref.x <<endl;
}


int main()
{
ABC obj1;
obj1.setdata(23);

PQR obj2;
obj2.display(obj1);

return 0;
}