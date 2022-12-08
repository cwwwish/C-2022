#include <iostream>
using namespace std;

template <class T> int binary_search(T *data,T item,int size);

int main() {
    int numArr[] = {0, 1, 1, 2, 3, 5, 6, 13, 21, 32, 55};
    int numSize = 11;
    int index;
    
    string strArr[] = {"head", "knees", "shoulders", "toes"};
    
    int strSize = 4;
    cout<<"Integer test array contains: "<<endl;
    for(int i=0;i<numSize;i++) {
        cout<<numArr[i]<<" ";
    }
    cout<<endl;
    for(int i=-1;i<8;i++) {
        index = binary_search<int>(numArr,i,numSize);
        cout<<i;

        if(index != -1)cout<<" is at index "<<index<<endl;
        else cout<<" is not in the array."<<endl;
    }
    cout<<endl<<"String test array contains: "<<endl;
    for(int i=0;i<strSize;i++)cout<<strArr[i]<<" ";
    cout<<endl;
    index = binary_search<string>(strArr,"elbows",strSize);
    
    if(index != -1)cout<<"elbows is at index "<<index<<endl;
    else cout<<"elbows is not in the array"<<endl;
    
    index = binary_search<string>(strArr,"knees",strSize);
    if(index != -1)
    cout<<"knees is at index "<<index<<endl;
    
    else cout<<"knees is not in the array"<<endl;
    return 0;
}
template <class T> int binary_search(T *data,T item, int size) {
    int low = 0;
    int high = size-1;
    int mid;
    while(low <= high) {
        mid = (low+high)/2;
        if(data[mid] == item)return mid;
        else if(data[mid] < item)low = mid+1;
        
        else high = mid-1;
    }
return -1;
}