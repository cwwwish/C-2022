#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void reduce(int *num, int *den) {
    int g_c_d = gcd(*num, *den);
    *num /= g_c_d;
    *den /= g_c_d;
}

int main() {
    int num, den;
    while (true){
        cout << "Enter the numerator: ";
        cin >> num;
        cout << "Enter the denominator: ";
        cin >> den;
        int g_c_d = gcd(num, den);
        cout << "greatest common denominator is " << g_c_d << "\n";
        reduce(&num, &den);
        cout << "your fraction reduced is " << num << "/" << den << "\n";
        
        int again;
        cout << "Try Again? (1 = yes, 0 = exit)\n";
        cin >> again;
        if (again == 0) break;
    }
}

