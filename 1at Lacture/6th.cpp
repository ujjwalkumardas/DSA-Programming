/*linear search */
#include<iostream>
using namespace std;
int function(int brr[],int size,int n){
    int i=0;
    for(int i=0;i<size;i++){
        if(brr[i]==n){
            return i=1;
        }
        
    }
}
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};//array .
    int n;
    cin>>n;//jo number ko search krna hai .
    int store;
    store=function(arr,9,n);//function call
    if(store==1){
        cout<<"mached";
    }
    else{
        cout<<"not match";
    }
}