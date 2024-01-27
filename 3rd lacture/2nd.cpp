#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};
void node(int b){
   struct node *box;
   if(box){
    box=(struct node *)(malloc(sizeof(struct node)));
   }
   struct node *START;
   START=box;
   box->data=b;
box->next=NULL;

while(START!=NULL){
cout<<START->data;
START->next;}
}
  
int main(){
    int a=20;
   node(a);
    
}