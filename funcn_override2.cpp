// function overriding
// child class function overrides parent class function

#include <iostream>

using namespace std;

class Father
{
public:
void use_remote() //overriden function
{
cout<<"TV is being watched by Father"<<endl;
}
};
class Child : public Father
{
public:
void use_remote() //overriding function
{
cout<<"TV is being watched by Child"<<endl;
}
};
int main()
{
Child ch;
ch.use_remote();

//child_class_object.PARENT_CLASS_NAME::function_name()

ch.Father::use_remote();


return 0;
}