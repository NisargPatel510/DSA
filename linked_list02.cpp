// Nisarg P Patel IT-104

#include<stdio.h>
#include<cstring>
#include<math.h>
#include<iomanip>
#include<iostream>
struct node* add( struct node *ptr, int num);
void print(struct node * head);
using namespace std;
using namespace std;

struct node {
    int data;
    struct node *link;
};

int main(){

int a[10]={10,22,36,43,67,51,30,23,56,48};
struct node *head=(struct node*)malloc(sizeof(struct node));
head->data=45;
head->link=NULL;

struct node *ptr=head;
ptr=add(ptr, 98);
ptr=add(ptr, 03);
ptr=add(ptr, 67);

print(head);
free(ptr);
struct node *start=(struct node*)malloc(sizeof(struct node));
start->data=10;
start->link=NULL;
for(int i=0;i<10;i++)
start=add(start, a[i]);

cout<<endl;

while(ptr!=NULL){
    cout<<ptr->data<<" ";
    ptr=ptr->link;
}
// Freeing first list (head)
struct node* temp;
while (head != NULL) {
    temp = head;
    head = head->link;
    free(temp);
    temp=NULL;
}

// Freeing second list (start)
while (start != NULL) {
    temp = start;
    start = start->link;
    free(temp);
}
return 0;
}

struct node* add( struct node *ptr, int num){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    temp->link=NULL;

    ptr->link=temp;
    return temp; 
}

void print(struct node * head){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
         cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
}