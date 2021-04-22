// Dynamic Constructor
// : where dynamic memory allocation is done inside the constructor

#include <iostream>

using namespace std;

class ABC
{
private:
int *ptr;
public:
ABC()
{
ptr = new int; //dynamic memory allocation
*ptr = 45;
}

~ABC()
{
cout<<"memory deallocated"<<endl;
delete ptr;
}

void show()
{
cout<<"Value of ptr is : "<< *ptr <<endl;
}
};

int main()
{
ABC obj1;
obj1.show();

ABC obj2 = ABC(); // same as ABC obj2
obj2.show();

return 0;
}