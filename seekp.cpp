#include <iostream>
#include <fstream>

using namespace std;

int main()
{
int pos;
ofstream outfile;

outfile.open("test.txt",ios::out);

//outfile << "This is a demo";

outfile.write("This is a demo",14); // write(char *,int length)

pos = outfile.tellp();

cout<<"current position of put pointer : "<<pos<<endl;

outfile.seekp(pos - 5);

outfile.write("n example of seekp()",20);

outfile.close();

return 0;
}