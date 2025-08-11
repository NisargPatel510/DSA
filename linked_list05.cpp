// Nisarg P Patel IT-104
//Add at begining;
#include<stdio.h>
// #include<cstring>
// #include<math.h>
// #include<iomanip>
#include<iostream>
void add_beg(struct node **head, int val);
void print(struct node **head);
using namespace std;
typedef struct node{
    int data;
    struct node* link;
}list;
 int main(){
list *head=(list*)malloc(8);
head->data=45;
head->link=NULL;

add_beg(&head, 56);
add_beg(&head, 30);
print(&head);

return 0; }
void add_beg(struct node **head, int val){
    struct node *ptr=(struct node *)malloc(8);
    ptr->data=val;
    ptr->link=NULL;

    ptr->link=*head;
    *head=ptr;
}
void print(struct node **head){
    struct node* p;
    p=*head;
    cout<<"\nLL contents :\n";
    while(p!=NULL){
    cout<<p->data<<" ";
    p=p->link;
    }
}   