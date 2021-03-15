/*Operations on pointers :-

1) incrementing a pointer by 1 (++)

2) decrementing a pointer by 1 (--)

3) adding integer value to pointer (ptr = ptr + 5;)

4) subtracting integer value from pointer (ptr = ptr - 5;)

5) comparing 2 pointers */

#include <iostream>

using namespace std;

int main()
{
int x = 34;

int *ptr1 = &x;

int *ptr2 = &x;

if(ptr1 == ptr2)
cout<<"both contain same address"<<endl;
else
cout<<"they contain differennt address"<<endl;

return 0;
}