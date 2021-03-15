
#include <iostream>
using namespace std;

int main()
{
int i, n;
float arr[5];

for(i = 0; i < 5; ++i)
{
cout << "Enter Number " << i + 1 << " : ";
cin >> arr[i];
}


for(i = 1;i < 5; ++i)
{

if(arr[0] < arr[i])
arr[0] = arr[i];
}
cout << "Largest element = " << arr[0];

}