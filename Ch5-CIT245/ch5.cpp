#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
//declare variable
int a[20], count, choice;

//while loop
while(1)
{
//fill array
for(int i=0; i<20; i++)
{
a[i] = rand()%10 + 1;
}

//sort array
sort(a,a+20);

//display oroginal array
cout<<"Original List Sorted:"<<endl;
for(int i=0; i<20; i++)
{
cout<<a[i]<<endl;
}

//display count
cout<<"N Count"<<endl;
for(int k=1; k<=10; k++)
{
count = 0;
for(int i=0; i<20; i++)
{
if(a[i]==a[k])
count++;
}
cout<<k<<": "<<count<<endl;
}

//get user choice
cout<<"Try Again?(1 = yes,0 = exit) ";
cin>>choice;
if(choice==0)
break;
}
return 0;
}