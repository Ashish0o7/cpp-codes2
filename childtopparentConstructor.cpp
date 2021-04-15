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
PQR(int a,int b) : ABC(b)
{
cout<<"PQR's constructor called"<<endl;
}
};
int main()
{
PQR obj(12,23);
return 0;
}