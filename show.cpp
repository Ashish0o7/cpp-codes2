#include <iostream>

using namespace std;

class ABC
{
public:
static void show()
{
cout<<"show() called "<<endl;
}
};

int main()
{
//ABC obj;

ABC::show();

return 0;
}