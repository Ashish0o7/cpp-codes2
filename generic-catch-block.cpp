// Generic catch block : executing for all types of exceptions

#include <iostream>

using namespace std;


int main()
{
int arr[] = {12,23,34,45,56,67};

int index;

cout<<"Enter index of element to be seen : ";
cin >> index;

try
{
if(index < 0)
throw 3.4f;
else if(index > 5)
throw 2;

cout<<"element present at index : "<< index << " is "<< arr[index] <<endl;
}
catch(...)
{
cout<<"Problem with array index"<<endl;
}

cout<<"Have a great day ahead !!!"<<endl;

return 0;
}