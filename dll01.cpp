// #include<bits/stdc++.h> //This includes all header files !
#include<stdio.h>
// #include<cstring>
// #include<math.h>
// #include<iomanip>
#include<iostream>
using namespace std;
typedef struct node{
    struct node *prev;
    int data;
    struct node *next;
}Node;

Node* make_node(Node* head, int data){
    Node * t= new Node;
    t->prev=NULL;
    t->data=data;
    t->next=NULL;
    head=t;
    return head;
}

Node* add_beg(Node *head, int data){
    Node * t= new Node;
    t->prev=NULL;
    t->data=data;
    t->next=head;
    head->prev=t;
    head=t;
    return head;
}

void add_end(Node *head, int data){
    Node* ptr;
    ptr=head;
    Node *t= new Node;
    t->data=data;
    t->next=NULL;
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=t;
    t->prev=ptr;
}

void add_after_pos(Node *head, int data, int pos){
    Node* newnode= new Node;
    newnode->prev=NULL;
    newnode->data=data;
    newnode->next=NULL;
    Node* temp=head;
    Node* temp2=head;
    for(int i=0; i<pos-1; ++i){
        temp=temp->next;
    }
    temp2=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
    newnode->next=temp2;
    temp2->prev=newnode;
}

void add_at_pos(Node* head, int data, int pos){
    Node *newnode,*temp,*temp2;
    temp=head;
    newnode=make_node(newnode, data);
    for(int i=0; i<pos-2;i++){
        temp=temp->next;
    }
    temp2=temp->next;
    newnode->prev=temp;
    newnode->next=temp2;
    temp2->prev=newnode;
    temp->next=newnode;
}

void print(Node *head){
    Node *ptr;
    ptr=head;
    cout<<"DLL contents : ";
    while(ptr!=NULL){
        cout<<ptr->data<<" <-> ";
        // cout<<"["<<ptr->prev<<"|"<<ptr->data<<"|"<<ptr->prev<<"]->";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}

int main (){
    Node *head= new Node;
    head=make_node(head,45);
    head=add_beg(head,30);
    head=add_beg(head,56);
    head=add_beg(head,98);
    add_end(head,104);
    add_end(head,28);
    add_after_pos(head,124, 3);
    add_at_pos(head,321,3);
    print(head);
return 0; }