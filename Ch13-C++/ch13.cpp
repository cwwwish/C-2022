#include<time.h>
#include<string>
#include<stdlib.h>
#include<cmath>
#include<iostream>
using namespace std;

void towerOfHanoi(int n, char source, char target, char temporary, int *c) {

  if (n == 0) {
    return;
  }

  *c = *c+1;
  towerOfHanoi(n - 1, source, temporary, target, c);
  cout <<"from " << source <<" to " << target << endl;
  towerOfHanoi(n - 1, temporary, target, source, c);
}

int main() {
  int n, c, choice; 
	c = 0;

	while(1) {
		cout<<"enter number of disks\n";
		cin>>n;

		towerOfHanoi(n, '1', '2', '3', &c); 
        
		cout<<"2 to the "<<n<<" power = "<<pow(2, 3)<<endl;
		cout<<"Number of moves "<<c<<endl;
	
		cout<<"Continue? (1 = yes 0 = no)";
		cin>> choice;
		if(choice==0) {
			break;
		}
	}
    
	return 0;
}