#include <iostream>

using namespace std;

template <typename T>
T process(T arr[],int size)
{
T total = 0;

for(int i = 0 ; i < size ; i++)
{
total = total + arr[i];
}

return total;
}

int main()
{
int arr1[] = {10,20,30};
cout<<"Sum of all elemnts of arr1 is : "<< process(arr1,3) << endl;

double arr2[] = {1.2 , 2.3 , 3.4};
cout<<"Sum of all elemnts of arr2 is : "<< process(arr2,3) << endl;

return 0;
}