// nested try-catch block
// re-throwing an exception (i.e. throwing an exception from catch block)

#include <iostream>

using namespace std;

int main()
{
try
{
cout << "inside outer try block of main()" << endl;

try
{
cout << "inside inner try block of main() " <<endl;
cout << "going to throw int value from inner try block of main()" <<endl;
throw 20;
}
catch(int num)
{
cout<<"caught int value "<< num <<endl;
cout<<"again going to throw the int value"<<endl;

throw;
}
}
catch(int x)
{
cout << "caught "<< x << " inside outer catch block of main() again" <<endl;
}
}