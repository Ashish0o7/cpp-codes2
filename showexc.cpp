#include <iostream>

using namespace std;

void showexc()
{
cout << "inside showexc() " <<endl;
cout << "going to throw int value from showexc() " <<endl;
throw 20;
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
cout << "caught "<< x << " inside catch block of main()" <<endl;
}
}

