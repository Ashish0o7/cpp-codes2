#include <iostream>

using namespace std;

int main()
{
int arr[] = {1,2,3,4,5,6};

int rtn;

cout<<"Enter rotation number : "<<endl;
cin>>rtn;

for(int k = 0 ; k < rtn ; k++)
{
int temp = arr[0];
for(int i = 0 ; i <= 4 ; i++)
{
arr[i] = arr[i+1];
}

arr[5] = temp;
}

cout<<"rotated array is : "<<endl;
for(int i = 0 ; i <= 5 ; i++)
{
cout<<arr[i]<<" ";
}

return 0;
}

/*
1) store first element of array in a temp variable
2) shift all the elements of array to left by 1 position
3) assign temp variable's value to the (n-1)th (the last) element of the array(where n is the size of the array)

4) repeat all above steps for the amount of time specified by user
*/