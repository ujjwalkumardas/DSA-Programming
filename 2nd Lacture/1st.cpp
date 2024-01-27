/*binary search in array*/
#include<iostream>
using namespace std;
int function(int arr[],int size ,int search){
    
    int start=0;
    int end=(size-1);
    int mid=(start+end)/2;
    while( start<=search){
    if(arr[mid]==search){
        return mid;
    }
if(arr[mid]<search){
    start=mid+1;
}
else{
    end=mid-1;
}
mid=(start+end)/2;
    }
    return -1;
 
 }
int main(){
    int num;
    cout<<"enter the value = ";
    cin>>num;
int crr[9]={2,4,6,8,10,12,14,16,18};
int print;
print=function(crr,9,num);
cout<<"INDEX OF "<<num<<" is "<< print;
}