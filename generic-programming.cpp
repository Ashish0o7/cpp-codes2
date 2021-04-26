// function template and class template in C++ (Generic Programming in C++)

#include <iostream>

using namespace std;

template <class T>
T sum(T x, T y) //function template (generic function)
{
return (x + y);
}

int main()
{
cout<<"Sum of 10 and 15 is : "<< sum(10,15) <<endl;

cout<<"Sum of 1.2 and 1.5 is : "<< sum(1.2,1.5) <<endl;

cout<<"Sum of A and a is : "<< sum('A','a') <<endl;

return 0;
}