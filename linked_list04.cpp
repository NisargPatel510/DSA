// Nisarg P Patel IT-104
#include<stdlib.h>
#include<iostream>

void print(struct node *head);
struct node * add(struct node* ptr, int num);
struct node * add_beg(struct node* ptr, int num);
using namespace std;
typedef struct node{
    int data;
    struct node *link;
}list;

int main(){
list *head=(list*)malloc(8);
head->data=45;
head->link=NULL;
list* ptr;
ptr=head;
int a[10]={10,22,36,43,67,51,30,23,56,48};
for(int i=0;i<10;i++)
ptr=add(ptr, a[i]);

//Adding a node at the begining :
list *q=(list*)malloc(8);
// q->data=56;
// q->link=head;
// head=q;
head=add_beg(head, 1034);

print(head);

return 0; }

 struct node *add(struct node* ptr, int num ){
    struct node* temp=(struct node *)malloc(8);
    temp->data=num;
    temp->link=NULL;

    ptr->link=temp;
    return temp;
 }
 void print(struct node * head)
 {
    struct node *ptr;
    ptr=head;
    cout<<endl<<"Linked_List data : ";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
cout<<endl<<endl;
 }

  struct node *add_beg(struct node* head, int num ){
    struct node* temp=(struct node *)malloc(8);
    temp->data=num;
    temp->link=head;
    return temp;
 }