#include <iostream>

using namespace std;

class Product
{
private:
int weight;
public:
Product(int);
void show();
friend void operator --(Product &);
};

Product :: Product(int w)
{
weight = w;
}

void Product :: show()
{
cout<<"weight of the box is : "<< weight <<endl;
}

void operator --(Product &pr)
{
pr.weight = pr.weight - 1;
}

int main()
{
Product obj1(201);

cout<<"before decrementing , for product obj1 "<<endl;
obj1.show();

--obj1; //call to operator function

cout<<"after decrementing , for product obj1 "<<endl;
obj1.show();

return 0;
}