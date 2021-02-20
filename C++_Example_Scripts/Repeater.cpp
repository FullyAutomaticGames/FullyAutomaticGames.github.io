#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

    int i{};
    int times{};
    string phrase;
    bool yesOrNo1;
    string yesOrNo2;

void YesFile() {
ofstream file;
    file.open ("output.txt");
    for(i=0;i<times;i++) {
    cout << phrase << "\n";
    file << phrase << "\n";
    }
    file.close();
}

void NoFile() {
    for(i=0;i<times;i++) {
    cout << phrase << "\n";
    }
}

void IsFile() {
if(yesOrNo2 == "yes") {
    yesOrNo1 = true;
    }
if(yesOrNo2 == "no") {
    yesOrNo1 = false;
    }
    switch(yesOrNo1) {
    case true:
        YesFile();
        break;
    default:
        NoFile();
        break;
    }
}

int main()
{
    cout << "What do you want the computer to say?\nKeep in mind that this program won't work with multiple words, so use underscore in place of space.\n";
    cin >> phrase;
    cout << "How many times do you want the computer to say it?\n";
    cin >> times;
    cout << "Do you want to have a text file of the output (enter 'yes' or 'no')?\n";
    cin >> yesOrNo2;
    cout << "________________________________________________________________________________________________________________________";
    IsFile();
    cout << "Press any key to exit.";
    getch();
    return 0;
}
