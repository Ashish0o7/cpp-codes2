// Standard Template Library in C++ (STL)
// Library of pre-defined class templates in C++

#include <iostream>
#include <array>

using namespace std;

int main()
{
int arr[] = {10,20,30,40};

array<int,4> obj = {10,20,30,40};

cout<<"element at index 0 in arr is : "<< arr[0] << endl;

cout<<"element at index 0 in obj is : "<< obj.at(0) << endl;

cout<<"element at index 0 in obj is : "<< obj[0] << endl;

return 0;
}

