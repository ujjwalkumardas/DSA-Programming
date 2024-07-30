/*linked list implementation with the help of recursion*/
#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node * next;
    node (int data){
        this->data=data;
        this->next=NULL;
    }
};
node *implement(int size,node * hold){
     if(size==0){
        return hold;
    }
    int data;
    cout<<"enter the data in list = ";
    cin>>data;
   
    node *temp=new node(data);
    temp->next=hold;
    
    return implement(size-1,temp);

}
void display(node * ptr){
    while(ptr!=NULL){
        cout<<ptr->data;
        ptr=ptr->next;
    }
}
int main(){
    node *head=NULL;
    int data;
    cout<<"how much node will you create = ";
    cin>>data;
    head= implement(data,head);
    display(head);
}