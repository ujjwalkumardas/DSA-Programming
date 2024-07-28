#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insert(node* &head,int var){
    node *temp=new node(var);
    temp->next=head;
    head=temp;
}
void display(node *head)
{
    if (head == NULL)
    {
        cout << "empty";
        return;
    }
    else
    {
        while (head != NULL)
        {
            cout << head->data;
            head = head->next;
        }
    }
}
int main(){
node* head=NULL;
int m;
cout<<"enter the no of node is created = ";
cin>>m;
int n;
for(int i=1;i<m;i++){
if(head==NULL){
    
    cout<<"enter the data = ";
    cin>>n;
    insert(head,n);
}
else{
    cout<<"enter the data = ";
    cin>>n;
    insert(head,n);

}}
display(head);
}