#include <iostream>

using namespace std;

class Student
{
private:
int rollno;
static char division;

public:
void getdata(int);
void changediv(char);
void showdata();
};

char Student :: division = 'A';

void Student :: getdata(int x)
{
rollno = x;
}

void Student :: changediv(char ch)
{
division = ch;
}

void Student :: showdata()
{
cout<<"rollno is : "<<rollno<<" , division is : "<<division<<endl;
}

int main()
{
Student s1 , s2;

s1.getdata(21);
s2.getdata(22);

cout<<"s1 details : "<<endl;
s1.showdata();

cout<<"s2 details : "<<endl;
s2.showdata();

s1.changediv('B');

cout<<"s2 details now : "<<endl;
s2.showdata();

return 0;
}