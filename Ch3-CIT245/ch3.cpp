#include<iostream> 
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include<iomanip>
using namespace std;
 
void Randoms(int lower, int upper, int rolled[13],int count) { 
    int i; 
    for (i = 0; i < count; i++) { 
        int num = (rand() % (upper - lower + 1)) + lower;
        rolled[num]++; 
    } 
}

int main() { 
    int lower = 2, upper = 12, count ;
    srand(time(0)); 
    int i,j,l,n;
    
    int sum[6][6];
    for(i=0;i<6;i++) {
        for(j=0;j<6;j++) {
            sum[i][j]=(i+j)+2;
        }
    }
    
    int odds[13]={0};
    for(i=0;i<6;i++) {
        for(j=0;j<6;j++) {
            odds[sum[i][j]]++;
        }
    }
    
    while(1) {
        cout<<"Please enter the number of rolls you want: ";
        cin>>count;
        int rolled[13]={0};
        
        Randoms(lower, upper, rolled, count); 
        cout<<"Sum #Rolled Odds %Error\n";
        
        for(i=2;i<=12;i++) {
            cout<<i<<" "<<rolled[i]<<" "<<odds[i]<<" "<<fixed << setprecision(4)
            <<(float)(abs(odds[i]-rolled[i])*1000.0/odds[i])<<endl;
        }
        
        cout<<"Try again? (1 = Yes, 0 = Exit)\n";
        cin>>l;
        
        if(l==0)
        break;
    }
    return 0; 
}
