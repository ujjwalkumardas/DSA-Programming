/*linked list implementation of using recursion*/
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
node *implementation(int arr[],int index,int size,node* prev){
    
    
    if(index==size){
        return prev;
    } 
    node* temp=new node(arr[index]);
    temp->next=prev;
    return implementation(arr,index+1,size,temp);
}
void printList(node* head) {
    node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int main(){
    node* head=NULL;
    int arr[]={2,3,4,5,6,7,8};
    head=implementation(arr,0,7,head);
    printList(head);
}