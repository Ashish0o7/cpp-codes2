#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
fstream fst;

fst.open("def.txt",ios::out);

if(fst)
{
cout<<"file is created and opened for writing"<<endl;

cout<<"Enter Data , press q to stop"<<endl;

while(1)
{
string str;

getline(cin,str);

if(str[0] == 'q')
break;

fst<<str<<endl;
}

fst.close();
cout<<endl;

cout<<"file closed"<<endl;
}
else
{
cout<<"issue in file creation"<<endl;
}

return 0;
}