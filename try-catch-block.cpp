#include <iostream>

using namespace std;

class Product
{
public:
Product()
{
cout<<"Product created"<<endl;
}

~Product()
{
cout<<"Product destroyed"<<endl;
}
};

int main()
{
try
{
Product obj;
throw obj;
}
catch(Product pr)
{
cout << " Product object caught " << endl;
}
}