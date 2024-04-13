#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *add;
    node(int i){
        data=i;
        add=NULL;
    }
};
class queue{
    int rear;
    int front;
    public:
    queue(){
        rear=NULL;
        front=NULL;
    }
    void push(int x){
        node* n=new node(x);
        if(front==NULL){
            rear=n;
            fornt=n;

        }
    }
};
