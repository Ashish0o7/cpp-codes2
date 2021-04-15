#include <iostream>

using namespace std;

int main()
{
int count;

cout<<"Enter number of students : ";
cin >> count;

int *arr = new int[count];

cout<<"Enter marks of "<< count << " number of students";

for(int i = 0 ; i < count ; i++)
{
cin >> arr[i];
}

int total = 0;

for(int i = 0 ; i < count ; i++)
{
total = total + arr[i];
}

int avg = total / count;

cout<<"Average of marks is : "<< avg <<endl;

delete[] arr;

return 0;
}