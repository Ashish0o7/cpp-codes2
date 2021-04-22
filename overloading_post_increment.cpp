// OVERLOADING POST-INCREMENT OPERATOR (++)

#include <iostream>

using namespace std;

class Integer
{
private:
int a;
public:
Integer(int);
void show();
void operator ++(int); // operator function
};

Integer :: Integer(int x)
{
a = x;
}

void Integer :: show()
{
cout<<"value of a is : "<< a <<endl;
}

void Integer :: operator ++(int)
{
a = a + 1;
}

int main()
{
Integer obj(20);

cout<<"before incrementing obj : "<<endl;
obj.show();

obj++; //call to the operator function

cout<<"after incrementing obj : "<<endl;

obj.show();

return 0;
}