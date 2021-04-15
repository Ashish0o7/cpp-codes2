// HANDLING MEMORY ALLOCATION FAILURE FROM SYSTEM

#include <iostream>

using namespace std;

int main()
{
long SIZE = 0x7fffffff;

try
{
char *arr = new char[SIZE];
cout<<"Memory allocation succeeded"<<endl;
}
catch(bad_alloc &ref)
{
cout<<"Memory allocation failed , reason is " << ref.what() <<endl;
}

return 0;
}