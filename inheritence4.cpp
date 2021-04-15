#include <iostream>

using namespace std;

class ABC
{
protected:
void show()
{
cout<<"ABC's show() called"<<endl;
}
public:
void display()
{
cout<<"ABC's display() called"<<endl;
}
};


class PQR : public ABC
{

};

class XYZ : public PQR
{
public:
void print()
{
show();
}
};

int main()
{
PQR obj;

obj.display();
//obj.show(); compile time error

XYZ ref;
ref.print();

return 0;
}