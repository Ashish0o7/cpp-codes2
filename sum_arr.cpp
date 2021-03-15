#include <iostream>

using namespace std;

int main()
{
int arr[5];
int sum = 0 , prd = 1;

cout<<"Enter elements for array : "<<endl;

for(int i = 0 ; i <= 4 ; i++)
{
cin>>arr[i];
}

for(int i = 0 ; i <= 4 ; i++)
{
sum = sum + arr[i];
}

for(int i = 0 ; i <= 4 ; i++)
{
prd = prd * arr[i];
}

cout<<"Sum of all elements is : "<<sum<<endl;
cout<<"Product of all elements is : "<<prd<<endl;
}
