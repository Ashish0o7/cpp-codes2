#include <iostream>

using namespace std;

int main()
{
int arr[] = {1,2,0,0,0,3,6};
int arr2[] = {0,0,0,0,0,0,0};

for(int i = 0 , k = 0 ; i <= 6 ; i++)
{
if(arr[i] != 0)
{
arr2[k] = arr[i];
k++;
}
}

cout<<"final array is : "<<endl;
for(int i = 0 ; i <= 6 ; i++)
{
cout<<arr2[i]<<" ";
}

return 0;
}