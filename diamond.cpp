// DIAMOND SHAPE AMBIGUITY ISSUE RESOLUTION

// (Using : Virtual Base class)

#include <iostream>

using namespace std;

class ABC
{
public:
void show()
{
cout<<"show() of ABC called"<<endl;
}
};

class PQR : virtual public ABC
{};

class XYZ : virtual public ABC
{};

class LMN : public PQR , public XYZ
{};

int main()
{
LMN obj;

obj.show();

return 0;
}