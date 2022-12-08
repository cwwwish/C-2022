#include <time.h>
#include <cstdio>
#include <stdio.h>
#include <fstream>
#include <cmath>
#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
    string str;
    string rorw;
    fstream inStream("advice.txt");

    cout << "Read or write (r/w)?: ";
    cin >> rorw;
    cin.ignore(100,'\n'); 

    if (!inStream.fail()) {
        cout << "Found Advice File." << endl;
        cout << "Old Advice:" << endl;

        while (getline(inStream, str)) {
            cout << str << endl; 
        }

        inStream.close();
        inStream.open("advice.txt", fstream::out);
        cout << "Enter your phrase for the next user: " << endl;

        while (getline(cin, str)) {
            inStream << str << endl;
            break;
        }

        inStream.close();
    }

    else {
        cout << "Could not open Advice File" << endl;
        cout << "Assumption: first run - creatig a new file..." << endl;
        inStream.open("advice.txt", fstream::out);
        cout << "Enter your phrase for the next user:" << endl;

        while (getline(cin, str)) {
            inStream << str << endl;
            break;
        }
        inStream.close();
    }

    cout << "Read or write (r/w)?: ";
    system("pause");
    return 0;
}