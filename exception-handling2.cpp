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
if(index < 0 || index > 5)
throw "Invalid array index provided";

cout<<"element present at index : "<< index << " is "<< arr[index] <<endl;
}
catch(const char *str)
{
cout << str << endl;
}

cout<<"Have a great day ahead !!!"<<endl;

return 0;
}