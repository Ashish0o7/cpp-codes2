#include <iostream>

using namespace std;

class ABC
{
public:
ABC()
{
cout<<"ABC's constructor called"<<endl;
}
};

class PQR : public ABC
{
public:
PQR()
{
cout<<"PQR's constructor called"<<endl;
}
};
int main()
{
PQR obj;
return 0;
}