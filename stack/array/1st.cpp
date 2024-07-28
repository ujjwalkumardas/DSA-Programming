//implemented stack with the help of array
#include<iostream>
using namespace std;
int array[10]={0};
int i=-1;
void push(int data){
    if(i==9){
        cout<<"stack is overflow";
        return;
    }
    else{
        i++;
        array[i]=data;
    }
}
int pop(){
    int temp;
    if(i==-1){
        cout<<"stack is empty";
    }
    else{
        
        temp=array[i];
        i--;
        cout<<temp<<endl;
    }
    
    return temp;
}
int main(){
    push(12);
    push(25);
    push(13);
    push(78);
    push(80);
    push(45);
    push(74);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();

    for(int j=0;j<=i;j++){
        cout<<array[j];
    }

}