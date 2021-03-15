#include <iostream>

using namespace std;

class Test
{
private:
int testcode;
char desc[15];
int no_of_candidates;
int centers_reqd;

float calcntr();

public :
void schedule();
void disptest();
};

float Test :: calcntr()
{
return (no_of_candidates / 100 + 1);
}


void Test :: schedule()
{
cout<<"Enter testcode for student : "<<endl;
cin>>testcode;

cout<<"Enter number of candidates : "<<endl;
cin>>no_of_candidates;


cout<<"Enter description of center : "<<endl;
cin>>desc;

//cin.sync();

centers_reqd = calcntr();
}

void Test :: disptest()
{
cout<<endl<<"Details are as follows : "<<endl;
cout<<"Test Code : "<<testcode<<endl;
cout<<"Center Description : "<<desc<<endl;
cout<<"No. of Candidates : "<<no_of_candidates<<endl;
cout<<"Required Centers : "<<centers_reqd<<endl;
}

int main()
{
Test obj;

obj.schedule();
obj.disptest();
}
