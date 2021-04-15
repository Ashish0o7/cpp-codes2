/ BASIC TYPE TO CLASS TYPE CONVERSION
// 2) By Overloading = operator

#include <iostream>

using namespace std;

class Product
{
private:
int weight;
public:
void show();
void operator = (int);
};

void Product :: show()
{
cout << "weight of product is : " << weight <<endl;
}

void Product :: operator = (int x)
{
weight = x;
}

int main()
{
int w = 35;

Product p1;

p1 = w; //call to the operator function

p1.show();

return 0;
}