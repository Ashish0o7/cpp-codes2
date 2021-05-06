#include <iostream>
#include <list>

using namespace std;

int main()
{
list<int> lst{10,20,30,40};
list<int> :: iterator it;

lst.push_back(50);

lst.push_front(0);

cout << "All elements from lst are : "<<endl;

for(it = lst.begin() ; it != lst.end() ; it++)
{
cout << *it << " ";
}

cout << endl << "Now , total no. of elements in lst are : " << lst.size() << endl;

cout << "Element at the front of lst is : " << lst.front() <<endl;

cout << "Element at the end of lst is : " << lst.back() <<endl;

lst.pop_front();
lst.pop_back();

cout << "After calling pop functions , all elements from lst are : "<<endl;

for(it = lst.begin() ; it != lst.end() ; it++)
{
cout << *it << " ";
}

lst.clear();

cout << endl << "After calling clear() , total no. of elements in lst are : " << lst.size() << endl;

return 0;
}