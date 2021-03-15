#include <iostream>
#include <fstream>

using namespace std;

int main()
{
fstream fst;

fst.open("abc.txt",ios::in);

if(fst)
{
cout<<"file is present and opened for reading"<<endl;

while(1)
{
string str;

getline(fst,str);

cout<<str;

if(fst.eof())
break;
}

fst.close();
cout<<endl;

cout<<"file closed"<<endl;
}
else
{
cout<<"file not present"<<endl;
}

return 0;
}
