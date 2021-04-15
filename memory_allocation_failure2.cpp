// HANDLING MEMORY ALLOCATION FAILURE FROM SYSTEM

#include <iostream>

using namespace std;

int main()
{
long SIZE = 0x7fffffff;

char *arr = new(nothrow) char[SIZE];

if(arr)
cout<<"Memory allocation succeeded"<<endl;
else
cout<<"Memory allocation failed"<<endl;

return 0;
}