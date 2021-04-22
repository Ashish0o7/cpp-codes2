// Self - Referential Classes

#include <iostream>

using namespace std;

class Node //self - referential class
{
public:
int data;
Node *ptr; //ptr can hold address of Node class object
};

int main()
{
Node obj1;
obj1.data = 23;
obj1.ptr = NULL;

Node obj2;
obj2.data = 45;
obj2.ptr = NULL;

obj1.ptr = &obj2;

cout<<"data of obj2 is : "<< obj2.data <<endl;
cout<<"Again data of obj2 is : "<< obj1.ptr->data <<endl;

return 0;
}

