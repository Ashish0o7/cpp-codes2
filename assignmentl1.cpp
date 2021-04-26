#include <iostream>
using namespace std;
class MyDate
{
private:
    int day, month, year;
public:
    MyDate()
    {
        day = month = year = 0;
    }
    int getDays()
    {
        int Duration = day;
        for(int c = 1; c < month; c++)
        {
            if(c == 1 || c == 3 || c == 5 || c == 7 || c == 8 || c == 10 || c == 12)
                Duration += 31;
            else if(c == 4 || c == 6 || c == 9 || c == 11)
                Duration += 30;
            else
                Duration += 28;
        }
        return Duration;
    }
    friend istream &operator>>(istream &input, MyDate &md)
    {
        char ch;
        input>>md.day>>ch>>md.month>>ch>>md.year;
        return input;
    }
};
int main()
{
    MyDate date;
    cout<<"\n Enter date: ";
    cin>>date;
    cout<<"\n Number of days since Jan 1 of the current year : "<<date.getDays();
    return 0;
}