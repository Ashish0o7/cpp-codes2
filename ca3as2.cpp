#include<iostream>
using namespace std;
class Mammals
{
    public: void xMammals()
    {
        cout<<"I am a mammal\n";
    }
};
class MarineAnimals
{
    public: void xMarineAnimals()
    {
        cout<<"I am a marine animal\n";
    }
};

class BlueWhale : public Mammals, public MarineAnimals
{
    public: void xBlueWhale()
    {
        cout<<"I belong to both categories: Mammals as well as Marine Animals\n";
    }
};
int main()
{
    Mammals m;
    MarineAnimals ma;
    BlueWhale bw;
    m.xMammals();
    bw.xBlueWhale();
    bw.xMammals();
    bw.xMarineAnimals();
    ma.xMarineAnimals();
}