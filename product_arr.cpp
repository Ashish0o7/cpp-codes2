#include <iostream>

using namespace std;

int main()
{
int sum = 0 , product = 1;

int arr[] = {2,3,4,1,10,8};

for(int i = 0 ; i <= 5 ; i++)
{
sum = sum + arr[i];
}

for(int i = 0 ; i <= 5 ; i++)
{
product = product * arr[i];
}

cout<<"Sum is : "<<sum<<" , product is : "<<product<<endl;
}