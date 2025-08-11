// Nisarg P Patel IT-104
// #include<stdio.h>
// #include<cstring>
// #include<math.h>
#include<iomanip>
#include<iostream>
using namespace std;
typedef struct node{
    int data;
    struct node *link;
}list;
struct node* del_head(struct node * head){
    if(head==NULL)
    cout<<" LL is already empty !";
    else{
    struct node * temp=head;
    head=head->link;
    free(temp);
    temp=NULL;
    return head;
    }
}
void del_last(struct node * head){
    if(head==NULL)
    cout<<"LL is already empty !\n";

    else if(head->link==NULL){
        free(head);
        head=NULL;
    }
    else{
        struct node *temp=head;
        struct node *temp2=head;
        while(temp->link!=NULL){
            temp2=temp;
            temp=temp->link;
        }
        temp2->link=NULL;
        free(temp);
        temp=NULL;
    }
}

struct node* del_ll(struct node* head){
    struct node * temp=head;
    while(temp!=NULL){
        temp=temp->link;
        free(head);
        head=temp;
    }
    return head;
}

void add_end(struct node* ptr, int val){
    struct node *temp=(struct node*)malloc(8);
    temp->data=val;
    temp->link=NULL;

    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}
void del_last_singleptr(struct node* head){
    if(head==NULL)cout<<"LL aleardy empty !\n";
    else{
        struct node* ptr=head;
        while(ptr->link->link!=NULL){
            ptr=ptr->link;
        }
        free(ptr->link);
        ptr->link=NULL;
    }
}
void print(struct node *ptr){
    if(ptr==NULL){
        cout<<"\nLL is already empty !";
    }
    else{
    cout<<"\nLL contents : \n";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
    }
}

int main(){
list* head= new list;
head->data=45;
head->link=NULL;

add_end(head, 30);
add_end(head, 56);
add_end(head, 98);
add_end(head, 20);
add_end(head, 76);
add_end(head, 58);
add_end(head, 104);

print(head);
head=del_head(head);
print(head);
del_last(head);
print(head);
del_last_singleptr(head);
print(head);
head=del_ll(head);
print(head);
return 0; 
}