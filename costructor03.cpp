#include <iostream>

using namespace std;

class ABC
{
private:
int i;
public:
ABC(int x)
{
i = x;
cout<<"ABC constructor called with i as "<<i<<endl;
}
};

class PQR
{
private:
ABC ref; // PQR HAS-A ABC

public:
PQR(int y) : ref(y)
{
cout<<"PQR constructor called"<<endl;
}
};

int main()
{
PQR obj(23);
return 0;
}