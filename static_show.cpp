#include <iostream>

using namespace std;

class ABC
{
public:
static void show();
};

void ABC :: show()
{
cout<<"static show() of ABC called"<<endl;
}

int main()
{
ABC::show();
return 0;
}