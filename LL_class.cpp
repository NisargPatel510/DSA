// Nisarg P Patel IT-104
//This line is added from remote access from crome !!
#include<stdio.h>
// #include<cstring>
// #include<math.h>
#include<iomanip>
#include<iostream>
// #include<bits/stdc++.h> //This includes all header files !
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=nullptr;
    }
};
class list{
    private:
    Node* head;
    public:
    list(){
        head=nullptr;
    }
    void add_end(int val){
        Node* newnode=new Node(val);
        Node* ptr=head;
        if(head==NULL){
        head=newnode; return;}
        while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->next=newnode;
    }
    void find(int val){
        int count=1;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==val){
                cout<<"Element found at :"<<count<<endl;
                return;
            }
            temp=temp->next;
            count++;
        }
        cout<<"Element NOT found !";
    }
    void add_pos(int val,int pos){
        Node *newnode= new Node(val);
        if(pos==0){
            newnode->next=head;
            head=newnode;
            return;
        }
        Node *temp=head;
        while(pos>1){
            temp=temp->next;
            pos--;
        }
        newnode->next=temp->next;
        temp->next=newnode;
}
    void print() const{
        Node* temp=head;
        cout<<"\nLL contents : ";
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<"NULL";
    }
    ~list(){
        Node* current=head;
        while(current!=NULL){
            Node* ptr=current->next;
            delete current;
            current=ptr;
        }
        head=NULL;
    }
};
 int main(){
    list mylist;
    mylist.add_end(45);
    mylist.add_end(30);
    mylist.add_end(54);
    mylist.add_end(98);
    mylist.add_end(104);
    mylist.add_pos(123,0);
    // mylist.find(12);
    mylist.print();
return 0; }