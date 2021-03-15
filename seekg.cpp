#include <iostream>
#include <fstream>

using namespace std;

int main()
{
ifstream ifs("data.txt",ios::in);

//ifs.seekg(10,ios::beg);

//cout<<"current position of file pointer is : "<< ifs.tellg() <<endl;

ifs.seekg(-7,ios::end);
cout<<"current position of file pointer is : "<< ifs.tellg() <<endl;

char arr[8];

ifs.read(arr,7); // read(char * , int length)

arr[7] = '\0';

cout<<"Data read : "<< arr <<endl;

return 0;
}

