// function template and class template in C++ (Generic Programming in C++)

#include <iostream>

using namespace std;

template <class T,class U>
T sum(T x, U y) //function template (generic function)
{
return (x + y);
}

int main()
{
cout<<"Sum of 10 and 15 is : "<< sum(10,15) <<endl;

cout<<"Sum of 1.2 and 15 is : "<< sum(1.2,15) <<endl;

cout<<"Sum of 12 and 1.5 is : "<< sum(12,1.5) <<endl;

return 0;
}