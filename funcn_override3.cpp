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

//calling parent class function from child class function
Father::use_remote();
}
};
int main()
{
Child ch;
ch.use_remote();

return 0;
}