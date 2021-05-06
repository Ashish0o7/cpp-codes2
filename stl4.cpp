// Erasing an element from vector

#include <iostream>
#include <vector>

using namespace std;

int main()
{
vector<int> v1{10,20,30,40,50};

cout<<"All elements of vector v1 are : "<<endl;
for(int i = 0 ; i < v1.size() ; i++)
{
cout << v1.at(i) << " ";
}

vector<int> :: iterator it;

cout<<endl<<"All elements of vector v1 are : "<<endl;

for(it = v1.begin() ; it != v1.end() ; it++)
{
cout << *it << " ";
}

it = v1.end() - 1;

v1.erase(it);

cout<<endl<<"After calling erase() , all elements of vector v1 are : "<<endl;
for(int i = 0 ; i < v1.size() ; i++)
{
cout << v1.at(i) << " ";
}

return 0;
}

