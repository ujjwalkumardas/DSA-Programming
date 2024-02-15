/*updating in function then also update in main function */
#include<iostream>
using namespace std;
void fun(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]+1;
        cout<<arr[i];
    }
}
int main(){
    int array[9]={4,5,8,7,3,9,2,5,8};
    fun(array,9);
    cout<<endl;
    for(int i=0;i<9;i++){
        cout<<array[i];
    }
}
