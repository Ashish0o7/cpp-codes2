// ORDER OF DESTRUCTOR EXECUTION IN CASE OF MULTIPLE INHERITANCE

#include <iostream>

using namespace std;

class ABC
{
public:
ABC()
{
cout<<"ABC's constructor called"<<endl;
}

~ABC()
{
cout<<"ABC's destructor called"<<endl;
}
};

class PQR
{
public:
PQR()
{
cout<<"PQR's constructor called"<<endl;
}

~PQR()
{
cout<<"PQR's destructor called"<<endl;
}
};

class XYZ : public ABC , public PQR //multiple inheritance
{
public:
XYZ()
{
cout<<"XYZ's constructor called"<<endl;
}

~XYZ()
{
cout<<"XYZ's destructor called"<<endl;
}
};

int main()
{
XYZ obj;
return 0;
}