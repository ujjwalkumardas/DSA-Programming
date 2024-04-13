#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *link;
};
struct node *START,*ptr;
void create(struct node *ptr2){
    struct node *temp;
    temp=(struct node *)(malloc(sizeof(struct node)));
    ptr2->link=temp;
    cin>>temp->data;
    temp->link=NULL;
    ptr->link;

    

}
void display(struct node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data;
        ptr=ptr->link;
    }
}
int main(){
    
    ptr=(struct node *)(malloc(sizeof(struct node)));
    START=ptr;
    cout<<"enter the data in 1 node = ";
    cin>>ptr->data;
    ptr->link=NULL;
    
    
   create(ptr);
display(START);
}