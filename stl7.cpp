// reversing a list

#include <iostream>
#include <list>

using namespace std;

int main()
{
list<int> lst{10,20,30,40};
list<int> :: iterator it;

cout << "All elements from lst are : "<<endl;
for(it = lst.begin() ; it != lst.end() ; it++)
{
cout << *it << " ";
}

it = lst.begin();

advance(it,1);

lst.insert(it,100);

cout << endl << "After calling insert() , all elements from lst are : "<<endl;
for(it = lst.begin() ; it != lst.end() ; it++)
{
cout << *it << " ";
}


list<int> lst2{100,200,300,400};
list<int> :: iterator it1;
list<int> :: iterator it2;

it = lst.begin();
it1 = lst2.begin();
it2 = lst2.end();

lst.insert(it,it1,it2);

cout << endl << "After calling new version of insert() , all elements from lst are : "<<endl;
for(it = lst.begin() ; it != lst.end() ; it++)
{
cout << *it << " ";
}

it = lst.begin();

lst.insert(it,2,999);

cout << endl << "After calling new version of insert() , all elements from lst are : "<<endl;
for(it = lst.begin() ; it != lst.end() ; it++)
{
cout << *it << " ";
}

return 0;
}

