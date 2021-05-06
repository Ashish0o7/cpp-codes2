#include <iostream>
#include <vector>

using namespace std;

int main()
{
vector<int> vobj1{10,20,30,40,50};

vector<int> vobj2(4,10);

cout<<"All elements of vobj1 are : " <<endl;

for(int i = 0 ; i<= 4 ; i++)
cout << vobj1[i] <<" ";

cout<<endl<<"All elements of vobj2 are : " <<endl;

for(int i = 0 ; i<= 3 ; i++)
cout << vobj2[i] <<" ";

vobj2.push_back(45);

cout<<endl<<"After push_back() , all elements of vobj2 are : "<<endl;
for(int i = 0 ; i<= 4 ; i++)
cout << vobj2.at(i) <<" ";

cout<<endl<<"Total number of elements in vobj1 is : "<< vobj1.size() << endl;

cout<<"front element in vobj1 is : "<< vobj1.front() <<endl;

cout<<"last element in vobj1 is : "<< vobj1.back() <<endl;

vobj2.clear();

cout<<"After clear(), now total number of elements in vobj2 is : "<< vobj2.size() << endl;
cout<<"Now capacity of vobj2 is : "<< vobj2.capacity() <<endl;

return 0;
}