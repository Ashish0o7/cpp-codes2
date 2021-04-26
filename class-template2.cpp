// class template in C++ (Writing function definition outside the class)

#include <iostream>

using namespace std;

template <class T>
class Product
{
private:
T height;
public:
Product(T param);

void show()
{
cout<<"Product's height is : "<<height<<endl;
}
};

template <class T>
Product<T> :: Product(T param)
{
height = param;
}


int main()
{
Product<int> p1(23);
p1.show();

Product<double> p2(3.5);
p2.show();

return 0;
}