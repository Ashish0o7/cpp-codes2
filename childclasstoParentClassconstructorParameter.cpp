// PASSING PARAMETER FROM CHILD CLASS CONSTRUCTOR TO PARENT CLASS CONSTRUCTOR

#include <iostream>

using namespace std;

class ABC
{
public:
ABC(int x)
{
cout<<"ABC's constructor called"<<endl;
}
};

class PQR : public ABC
{
public:
PQR() : ABC(25)
{
cout<<"PQR's constructor called"<<endl;
}
};
int main()
{
PQR obj;
return 0;
}