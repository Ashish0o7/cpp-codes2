// BASIC TYPE TO CLASS TYPE CONVERSION
// 1) Using Constructor

#include <iostream>

using namespace std;

class Product
{
private:
int weight;
public:
Product(int);
void show();
};

Product :: Product(int x)
{
weight = x;
}

void Product :: show()
{
cout<<"weight of product is : "<<weight<<endl;
}

int main()
{
int w = 35;

Product p1 = w;

p1.show();

return 0;