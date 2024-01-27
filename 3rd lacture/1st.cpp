
#include<iostream>
#include<stdlib.h>
using namespace std;
struct name{
    int data;
    struct name *next;
};
/*functin taraversal*/
void functintraversal(struct name *ptr){
while(ptr!=NULL){
   cout<< ptr->data;//data ko print kro
   ptr=ptr->next;//node ko update kro
}
}

int main(){
    /*1st node*/
struct name *frist;
frist=(struct name*)(malloc(sizeof(struct name)));
/*2nd node*/
struct name*second;
second=(struct name*)(malloc(sizeof(struct name)));
/*3rd node*/
struct name *third;
third=(struct name*)(malloc(sizeof(struct name)));
/*4th node*/
struct name *fourth;
fourth=(struct name*)(malloc(sizeof(struct name)));

/*puting the data in node*/
frist->data=10;
second->data=20;
third->data=30;
fourth->data=40;

/*LINKING THE NODE*/
frist->next=second;
second->next=third;
third->next=fourth;
fourth->next=NULL;
/*calling th function*/
functintraversal(frist);

}
