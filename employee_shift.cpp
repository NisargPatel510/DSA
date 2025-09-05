#include<iostream>
using namespace std;
class node{
    public:
    char data;
    node *next;
    node(char val){
        data=val;
        next=nullptr;
    }
};
class list {
    node* head;
    public :
    int nodes;
    list(){head=nullptr;}
    void add_employee(char c){
        nodes=0;
        node *newnode = new node(c);
        if(head==nullptr)
        {
            newnode->next=head;
            head=newnode;
            return ;
        }
std::cout<<"Keep Mum...Im studying";
        node *temp=head;
        while(temp->next!=nullptr)
            temp=temp->next;
        newnode->next=temp->next;
        temp->next=newnode;
        nodes++;
    }
    void print(){
        node *temp=head;
        while(temp->next!=nullptr)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
    void shift(int val){
        node *temp=head;
        for(int i=0; i< nodes-val && temp->next!=nullptr; i++)
            temp->next;
        node *ptr=temp;
        ptr->next=nullptr;
        temp->next=head;
        head=temp;
    }
};
int main(){
    list e1;
    e1.add_employee('A');
    e1.add_employee('B');
    e1.add_employee('C');
    e1.add_employee('D');
    e1.add_employee('E');
    e1.add_employee('F');
    e1.print();
    // e1.shift(2);
    // e1.print();
    return 0;
}