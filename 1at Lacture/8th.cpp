/*reverse of array*/

//  [second trick]

#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main(){
int arr[9]={1,2,3,4,5,6,7,8,9};
reverse(arr,9);
printarray(arr,9);

}