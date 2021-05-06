#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare_function(int i , int j)
{
return i > j;
}

int main()
{
vector<int> v1{12,23,45,21,34};

vector<int> :: iterator it1;
vector<int> :: iterator it2;

it1 = v1.begin();
it2 = v1.end();

sort(it1,it2,compare_function);

cout<<"All elements of v1 after calling sort() are : "<<endl;
for(int i = 0 ; i < v1.size() ; i++)
cout << v1.at(i) << " ";

cout << endl;

it1 = v1.begin();
it2 = v1.end();

cout << endl;

if(is_sorted(it1,it2,compare_function))
cout << "The elements have already been sorted"<<endl;
else
cout << "The elements have not been sorted"<<endl;
return 0;
}