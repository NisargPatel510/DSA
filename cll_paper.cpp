// #include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class node{
    public :
    // string text;
    string data;
    node *link;
    node(string msg){           
        data=msg;
    }
};
class list{
    public:
    node *head;
    list(){
        head=nullptr;
    }
    void add(string msg){
        node *newnode=new node(msg);
        if(head==nullptr)
        {
            head=newnode;
            newnode->link=head;
            return;
        }
        node *temp=head;
        while(temp->link!=head){
            temp=temp->link;
        }
        temp->link=newnode;
        newnode->link=head;
    }
    void print(){
    if(head==nullptr){cout<<"Empty Cll\n";return;}
    node* p=head;
    cout<<"CLL contents :\n";
    do{
        cout<<p->data<<" ";
        p=p->link;
    }
    while(p!=head);
    cout<<endl;
}
};
int main(){
    list l1;
    l1.add("Hello");
    l1.add("there");
    l1.add("how");
    l1.add("are");
    l1.add("you?");
    l1.print();
return 0;
}