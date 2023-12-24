/*reverse of array*/

//  [ frist trick ]

#include<iostream>
using namespace std;
int main(){
int arr[9]={1,2,3,4,5,6,7,8,9};
int a=sizeof(arr)/sizeof(int);
int i=8;
while(i>=0){
cout<<arr[i];
i--;
}
}