/*sum of array */
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"size of array";
    cin>>a;
    int arr[a];
    int n=sizeof(arr)/sizeof(int);
    cout<<"\n"<<n;
    int sum=0;
    for(int j=0;j<(n);j++){
        cin>>arr[j];
    }
    for(int i=0;i<(n);i++){
        cout<<arr[i];
     sum=sum+arr[i];
       
    }
    cout<<"\n"<<sum<<" is a sum of whole array";
}