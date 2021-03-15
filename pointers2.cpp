#include <iostream>

using namespace std;

int main()
{
int arr[] = {10,20,30,40,50};

cout<<"element at index 0 in arr is : "<< arr[0] << endl;

cout<<"address of element at index 0 : "<< &arr[0] << endl;

cout<<"address of element at index 0 : "<< arr << endl;

int *ptr = arr;

cout<<"element at index 0 in arr is : "<< *ptr << endl;

cout<<"element at index 0 in arr is : "<< *arr << endl;

cout<<"element at index 0 in arr is : "<< *(arr+0) << endl;


cout<<"element at index 1 in arr is : "<< arr[1] << endl;

ptr++; //incrementing pointer by 1

cout<<"element at index 1 in arr is : "<< *ptr << endl;

cout<<"element at index 1 in arr is : "<< *(arr+1) << endl;


ptr++; //incrementing pointer by 1

cout<<"element at index 2 in arr is : "<< arr[2] << endl;

cout<<"element at index 2 in arr is : "<< *ptr << endl;

cout<<"element at index 2 in arr is : "<< *(arr+2) << endl;

ptr--;
cout<<"now element at index 1 in arr is : "<< *ptr << endl;

return 0;
}