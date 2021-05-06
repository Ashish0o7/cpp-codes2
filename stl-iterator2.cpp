// Erasing an element from vector

#include <iostream>
#include <vector>

using namespace std;

int main()
{
vector<int> v1{10,20,30,40,50};

vector<int> :: iterator it1;
vector<int> :: iterator it2;

cout<<endl<<"All elements of vector v1 are : "<<endl;
for(it1 = v1.begin() ; it1 != v1.end() ; it1++)
{
cout << *it1 << " ";
}

it1 = v1.begin();
it2 = v1.end() - 2;

v1.erase(it1,it2);

cout<<endl<<"After calling erase() , all elements of vector v1 are : "<<endl;
for(int i = 0 ; i < v1.size() ; i++)
{
cout << v1.at(i) << " ";
}

return 0;
}