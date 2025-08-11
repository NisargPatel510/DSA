#include<stdio.h>
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *prev;
    node *next;
    node(int val){
        data=val;
        prev=nullptr;
        next=nullptr;
    }
};
class list{
    node *head;
    public:
    list(){
        head=nullptr;
    }
    void add(int val){
        node *newnode= new node(val);
        if(head==nullptr){
            newnode->next=head;
            head=newnode;
            return ;
        }
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return;
    }
    void print() const{
        node* temp=head;
        cout<<"\nLL contents : ";
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<"NULL";
    }
    void del(int val){
        node *temp=head;
        while(temp->data!=val)
            temp=temp->next;
        temp->next=temp->next->next->next;
        return;
    }
    void remove_dupl(){
        
    }
};
int main(){
    list dl1;
    dl1.add(45);
    dl1.add(36);
    dl1.add(87);
    dl1.add(65);
    dl1.add(65);
    dl1.add(65);
    dl1.add(98);
    dl1.print();
    dl1.del(65);//error if we are at 3rd or 2nd last element!
    dl1.print();
    dl1.remove_dupl();
    return 0;
}
