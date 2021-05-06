// advance() operation

#include <iostream>
#include <vector>

using namespace std;

int main()
{
vector<int> v1{10,20,30,40,50,60,70,80,90,100};

vector<int> :: iterator it;

it = v1.begin();

cout << "Element at the start of vector v1 is : "<< *it << endl;

advance(it,5);

cout << "After advance() , current Element of vector v1 is : "<< *it << endl;

advance(it,1);

cout << "After advance() , current Element of vector v1 is : "<< *it << endl;

advance(it,-2);

cout << "After advance() , current Element of vector v1 is : "<< *it << endl;

advance(it,10);

cout << "After advance() , current Element of vector v1 is : "<< *it << endl;

return 0;
}

