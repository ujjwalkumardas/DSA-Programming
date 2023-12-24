/*array passing in function*/
#include<iostream>
using namespace std;
void fun(int arr[],int  size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main(){
    int array[6]={1,2,3,4,5,6};
    fun(array,6);

}