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

lst.reverse();

cout << endl << "After calling reverse() , all elements from lst are : "<<endl;
for(it = lst.begin() ; it != lst.end() ; it++)
{
cout << *it << " ";
}

return 0;
}

