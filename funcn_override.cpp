// function overriding
// child class function overrides parent class function

#include <iostream>

using namespace std;

class Father
{
public:
void use_remote()
{
cout<<"TV is being watched by Father"<<endl;
}
};
class Child : public Father
{
public:
void use_remote()
{
cout<<"TV is being watched by Child"<<endl;
}
};
int main()
{
Child ch;
ch.use_remote();
return 0;
}

