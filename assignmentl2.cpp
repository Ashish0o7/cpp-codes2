#include <iostream>
#include <fstream>
using namespace std;
int main()  {
    fstream file;
    string s;
    file.open("Text1.txt", ios::in);
    
    if(!file) {
        
        cout << "File not found";
    }
    else  {
    while (getline(file, s))
    {
        cout << s << endl;
    }
    file.close();
    file.open("Text1.txt", ios::app);
    file<< "\nNow learnt C++;Java is my next target.";
    file.close();  
    return 0;
    }    
}