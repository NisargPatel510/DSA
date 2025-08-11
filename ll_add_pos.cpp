// Nisarg P Patel IT-104

#include<stdio.h>
// #include<stdlib.h>
// #include<cstring>
// #include<math.h>
#include<iomanip>
#include<iostream>
using namespace std;
typedef struct node {
    int data;
    struct node *link;
} list;
void add_end(struct node *ptr ,int val){
    struct node *temp=(struct node*)malloc(8);
    temp->data=val;
    temp->link=NULL;
 while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link=temp;
}
void print(struct node *ptr){
    cout<<" LL contents : \n";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
}

void add_pos(struct node *ptr, int val, int pos){
    struct node* temp= new struct node;
    temp->data=val;
    temp->link=NULL;

    ptr=ptr->link;
    temp->link=ptr->link;
    ptr->link=temp;
    
}

int main(){
    list* head= new list;
    list *ptr=head;
    head->data=45;
    head->link=NULL;

    add_end(ptr, 56);
    add_end(ptr, 30);
    add_pos(head, 98, 3);
    cout<<"LL contents \n";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
    return 0;
}
