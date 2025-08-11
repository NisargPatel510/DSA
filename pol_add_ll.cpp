// Online C++ compiler to run C++ program online
#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
class node{
    public:
    float coef;
    int expo;
    node *next;
    node(float c,int e){
        coef=c;
        expo=e;
        next=nullptr;
    }
};
class eq{
    public:
    node* head;
    eq(){
        head=nullptr;
    }
    
    void insert(float c, int e) {
    node *newnode = new node(c, e);
    if (head == nullptr || e > head->expo) { 
        newnode->next = head;
        head = newnode;
        return;
    }
    node *temp = head;
    while (temp->next != nullptr && temp->next->expo >= e) {
        temp = temp->next;
    }
    // Insert the new node
    newnode->next = temp->next;
    temp->next = newnode;
}
   void print(){
    node* temp=head;
    cout<<"\n My equation :";
    while(temp!=nullptr){
        cout<<temp->coef<<"x^"<<temp->expo<<" ";
        temp = temp->next; // Crucial: move to the next node
    }
    cout << endl;
}
     // Destructor (important for memory management)
    ~eq() {
        node* current = head;
        node* next_node;
        while (current != nullptr) {
            next_node = current->next;
            delete current;
            current = next_node;
        }
        head = nullptr;
    }
    friend eq Add_polynomial(const eq &p1, const eq &p2);
        
};

eq Add_polynomial(const eq& p1, const eq& p2) {
    node* t1=p1.head;
    node* t2=p2.head;
    eq result;
    
    while(t1!=NULL && t2!=NULL){
        
        if(t1->expo == t2->expo){
            result.insert(t1->coef + t2->coef, t1->expo);
            t1=t1->next;
            t2=t2->next;
        }
        else if(t1->expo > t2->expo){
            result.insert(t1->coef, t1->expo);
            t1=t1->next;
        }
        else if(t2->expo > t1->expo){
            result.insert(t2->coef, t2->expo);
            t2=t2->next;
        }
    }
    
return result;
}
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
class list{
    private:
    Node *head;
    public:
    list(){
        // Node *newnode=new Node(int val);
        head=nullptr;
    }

    void add_end(int val){
        Node *newnode= new Node(val);
        Node *temp=head;
        if(head==nullptr){
            head=newnode;
            return;
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    void add_asend(int val){
        Node* temp=head;
        Node *newnode= new Node(val);
        while(temp->next->data<=val){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    
    void print(){
        Node *ptr;
        ptr=head;
        cout<<"LL contents : ";
        while(ptr!=NULL){
            cout<<ptr->data<<"->";
            ptr=ptr->next;
        }
        cout<<"NULL";
    }
};


int main(){
    // list mylist;
    // mylist.add_end(36);
    // mylist.add_end(46);
    // mylist.add_end(68);
    // mylist.add_end(75);
    // mylist.add_end(98);
    // mylist.add_end(104);
    // mylist.add_asend(78);
    // mylist.print();
    eq myeq1,myeq2;
    myeq1.insert(2, 3);
    myeq1.insert(-3, 1);
    myeq1.insert(5, 0);
    myeq1.print();
    myeq2.insert(5, 3);
    myeq2.insert(-9, 4);
    myeq2.insert(12, 0);
    myeq2.print();
    eq poly_sum=Add_polynomial(myeq1, myeq2);
    cout<<" Added equation :";
    poly_sum.print();
    return 0;
}