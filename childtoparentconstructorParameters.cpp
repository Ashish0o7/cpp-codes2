// PASSING PARAMETER FROM CHILD CLASS CONSTRUCTOR TO PARENT CLASS CONSTRUCTOR

#include <iostream>

using namespace std;

class ABC
{
public:
ABC(int x)
{
cout<<"ABC's constructor called"<<endl;
cout<<"value of x is : "<< x << endl;
}
};

class PQR : public ABC
{
private:
int num;

public:
PQR(int a,int b) : ABC(b) , num(a)
{
cout<<"PQR's constructor called"<<endl;
cout<<"value of member num is : "<< num <<endl;
}
};
int main()
{
PQR obj(12,23);
return 0;
}