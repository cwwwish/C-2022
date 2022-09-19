#include <iostream>
using namespace std;

int main() {
    
    float input, guess, r;
    cout << "Enter a number and I will apply the ";
    cout << "Babylonian square root algorithm until ";
    cout << "I am within .001 of the correct answer. " << endl;
    cin >> input;
    cout << "You entered " << input << endl;
    
    float threshold = 0.5;
    
    guess = input / 2.0;
    
    do {
        r = input / guess;
        guess = (guess + r) / 2;
        cout << "guessing " << guess << endl;
    }
    
    while (guess - r > threshold);
    
    cout << "The Babylonian algorithm gives " << guess << endl;
    
    cout << "Checking: " << guess << " * " << guess << " = ";
    cout << guess * guess << endl;
    cout<< "Press any key to continue ";

}