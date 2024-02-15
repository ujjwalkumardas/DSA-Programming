#include<iostream>
using namespace std;
    class tree{
        public:
        class tree *left;
        int data;
        class tree *right;
    
       void display();
    };

      void tree::display(){
        int i;
        cout<<"enter data in the  node = ";
        cin>>i;
        class tree *new1;
        new1=(class tree *)(malloc(sizeof(class tree)));
        new1->left=new1->right=NULL;
        new1->data=i;
        if(root==NULL){
            root=new1;
        }
        else{
            create(root,new1);

        }
    }
    void create(class tree *r,class tree *new1){
        
    }
    class tree *root=NULL;
    
    int main(){
        tree p;
        p.display();
        
    }