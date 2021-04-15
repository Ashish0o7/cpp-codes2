// ORDER OF CONSTRUCTOR EXECUTION IN CASE OF MULTI_LEVEL INHERITANCE

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

class XYZ : public PQR
{
public:
XYZ()
{
cout<<"XYZ's constructor called"<<endl;
}
};

int main()
{
XYZ obj;
return 0;
}

