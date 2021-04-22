// nested try-catch block

// re-throwing an exception (i.e. throwing an exception from catch block)

#include <iostream>

using namespace std;

void showexc()
{
try
{
cout << "inside try block of showexc() " <<endl;
cout << "going to throw int value from showexc() " <<endl;
throw 20;
}
catch(int num)
{
cout<<"caught int value "<< num << " inside catch block of showexc()"<<endl;
cout<<"again going to throw the int value from catch block of showexc()"<<endl;

throw;
}
}

int main()
{
try
{
cout << "inside try block of main() , going to call showexc()" << endl;
showexc();
}
catch(int x)
{
cout << "caught "<< x << " inside catch block of main() again" <<endl;
}
}