#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
string studentName;
public:
int rollNumber;
int tutionFees;

void getName()
{
cout<<"Enter name of student : "<<endl;
cin>>studentName;
}

void showName()
{
cout<<"name of student is : "<<studentName<<endl;
}
};

int main()
{
Student s;

s.getName();
s.showName();

cout<<"Enter rollno of student : "<<endl;
cin>>s.rollNumber;
cout<<"Enter fees of student : "<<endl;
cin>>s.tutionFees;

cout<<s.rollNumber<<" : "<<s.tutionFees<<endl;

return 0;
}

