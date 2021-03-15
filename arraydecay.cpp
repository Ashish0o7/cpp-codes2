//Array Decay :

#include <iostream>

using namespace std;

void fun(int *ptr, int size)
{
cout<<"size of ptr is : "<< sizeof(ptr) <<endl;

for(int i = 1 ; i <= size ; i++)
{
cout<<*ptr<<endl;
ptr++;
}
}

int main()
{
int arr[] = {10,20,30,40,50};

cout<<"size of arr is : "<< sizeof(arr) <<endl;

fun(arr , 5); // arr is same as &arr[0]

return 0;
}