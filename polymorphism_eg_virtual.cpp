#include <iostream>

using namespace std;

class Animal
{
public:
virtual void eat()
{
cout<<"Animal eats food"<<endl;
}
};

class Cat : public Animal
{
public:
void eat()
{
cout<<"Cat eats rat"<<endl;
}
};

void func(Animal *obj)
{
obj->eat();
}


int main()
{
Animal anm;
func(&anm);

Cat cobj;
func(&cobj);

return 0;
}