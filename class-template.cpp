// class template in C++

#include <iostream>

using namespace std;

template <class T>
class Product
{
private:
T height;
public:
Product(T param)
{
height = param;
}

void show()
{
cout<<"Product's height is : "<< height << endl;
}
};

int main()
{
Product<int> p1(23);
p1.show();

Product<double> p2(3.5);
p2.show();

return 0;
}