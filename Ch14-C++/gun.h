#include<time.h>
#include<string>
#include<stdlib.h>
#include<cmath>
#include<iostream>
using namespace std;
#ifndef GUN_H
#define GUN_H

class Gun {
    protected:
        string manufacturer;
        string caliber;
    public:
        void setManufacturer(string m) {manufacturer = m;}
        void setCaliber(string c) {caliber = c;}
        virtual void print() = 0;
};
#endif