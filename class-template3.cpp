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

void show();
};

template <class T>
Product<T> :: Product(T param)
{
height = param;
}

template <class T>
void Product<T> :: show()
{
cout<<"Product's height is : "<<height<<endl;
}

int main()
{
Product<int> p1(23);
p1.show();

Product<double> p2(3.5);
p2.show();

return 0;
}

