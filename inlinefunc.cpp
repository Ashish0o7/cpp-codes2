#include <iostream>

using namespace std;

inline void show(int x,int y)
{
cout<<"show() function called with params : "<<x<<" and "<<y<<endl;
}

int main()
{
show(12,23);
return 0;
}

/*
1) function instructions are copied onto main memory
2) all the parameters of function are loaded into stack
3) point of execution is transferred from calling function to the called function
4) code of function will be executed
5) point of execution will return to the calling function
*/


limitation of inline functions :

1) if function contains lots of code , compiler will ignore the keyword inline
2) function should not contain any loop
3) function should not contain static variable
4) function should not be recursive