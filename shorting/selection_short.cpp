#include<iostream>
using namespace std;
int main(){
    int arr[8];
    for(int k=0;k<8;k++){
        cout<<"enter the element"<<" index["<<k<<"] = ";
        cin>>arr[k];
    }
    for(int i=0;i<8;i++){
       int index=i;
       for(int j=i+1;j<8;j++){
        if(arr[j]<arr[index]){
            
            index=j;
            
        }
       } 
       swap(arr[i],arr[index]);
    }
    for(int i=0;i<8;i++){
        cout<<arr[i];
    }
}