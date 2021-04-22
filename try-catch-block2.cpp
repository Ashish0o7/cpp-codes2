// catch block catching parent class object should be written at the end.

#include <iostream>

using namespace std;

class ABC
{};

class PQR : public ABC
{};

int main()
{
try
{
PQR obj;
throw obj;
}
catch(ABC ref)
{
cout << "caught ABC's object" <<endl;
}
catch(PQR ref)
{
cout << "caught PQR's object" <<endl;
}
}