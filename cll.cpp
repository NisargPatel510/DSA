// Nisarg P Patel IT-104
#include<stdio.h>
// #include<cstring>
// #include<math.h>
#include<iomanip>
#include<iostream>
// #include<bits/stdc++.h> //This includes all tailer files !
using namespace std;
typedef struct node{
    int data;
    struct node *prev;
    struct node *next;
}Node;

struct node* add_empty(int data){
    Node* temp= new Node;
    temp->data=data;
    temp->next=temp;
    return temp;
}

struct node* add_beg(struct node* tail, int data){
    Node* temp= new Node;
    temp->data=data;
    temp->next=tail->next ;
    tail->next=temp;
    return tail;
}
struct node* del_first(struct node* tail){
    Node* temp=new Node;
    temp=tail->next;
    if(temp==tail){
        free(tail);
        tail=NULL;
        return tail;
    }
    else if(tail==NULL)
    return tail;
    else{
        tail->next=temp->next;
        temp->next->prev=tail;
        free(temp);
        return tail;
    } 
}
struct node* del_last(struct node* tail){
    Node* temp=new Node;
    temp=tail->prev;
    temp->next=tail->next;
    tail->next->prev=temp;
    free(tail);
    return tail;
}
void print(struct node* tail){
    Node* p= tail->next;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=tail->next);
}
 int main(){
    Node *tail;
    tail=add_empty(45);
    tail=add_beg(tail,36);
    tail=add_beg(tail,58);
    tail=add_beg(tail,98);
    tail=add_beg(tail,104);
    tail=add_beg(tail,123);
    tail=add_beg(tail,145);
    tail=del_first(tail);
    tail=del_last(tail);

    print(tail);
return 0; }