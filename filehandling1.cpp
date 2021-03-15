#include <iostream>
#include <fstream>

using namespace std;

int main()
{
fstream fst;

fst.open("abc.txt",ios::out);

if(fst)
{
cout<<"file created and opened for writing"<<endl;

fst<<" March month arrived";

fst.close();
cout<<"file closed"<<endl;
}
else
{
cout<<"issue in file creation"<<endl;
}

return 0;
}