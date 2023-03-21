#include <iostream>
#include <memoryapi.h>
#include <winable.h>
using namespace std;

int main()
{
    string user;

    cout << "What would you want to enable?\nGod Mode (G)\nRun Speed (R)\nSuicide (S)\n";
    cin >> user;
    

    //hey this is my first time making a gta 5 menu in c++ so if the if statements make ur head hurt please tell me how to fix it lol

    if (user == "G" || user == "g")
    {
        cout << "God Mode\n";
    }
    else if (user == "R" || user == "r")
    {
        cout << "Run Speed\n";
    }
    else if (user == "S" || user == "s")
    {
        cout << "Suicide\n";
    }
}
