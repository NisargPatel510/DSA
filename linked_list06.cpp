// Nisarg P Patel IT-104

#include<stdio.h>
// #include<cstring>
// #include<math.h>
#include<iomanip>
#include<iostream>
using namespace std;
typedef struct node{
    int data;
    struct node *link;
}list;
void add(struct node **head,struct node **tail, int val){
    struct node *temp=(struct node *)malloc(8);
    temp->data=val;
    temp->link=NULL;

    if (*head== NULL) {
        *head= temp;
        *tail= temp;
    } else {
        (*tail)->link = temp;
        *tail = temp;
    }
   }

void print(struct node **head){
    struct node* p;
    p=*head;
    cout<<"\nLL contents : \n";
    while(p!=NULL){
    cout<<p->data<<" ";
    p=p->link;
    }
}

 int main(){
    list *tail=NULL;
    list *head=NULL;

    add(&head, &tail, 45);
    add(&head, &tail, 55); 
    add(&head, &tail, 65); 
    add(&head, &tail, 75); 
    add(&head, &tail, 95); 
    print(&head);
    

return 0; }