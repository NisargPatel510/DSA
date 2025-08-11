// Nisarg P Patel IT-104
#include<stdio.h>
// #include<cstring>
// #include<math.h>
#include<iomanip>
#include<iostream>
// #include<bits/stdc++.h> //This includes all header files !
using namespace std;

class node{
    public:
    int coef;
    int expo;
    node *next;

    node(int c,int e){
        coef=c;
        expo=e;
        next=nullptr;
    }
};

class eq{
    node *head;
    public:
    eq(){
        head=nullptr;
    }
    void insert(int c, int e){
        node *newnode= new node(c, e);
        node* temp=head;
        if (head == nullptr || e > head->expo) { 
        newnode->next = head;
        head = newnode;
        return;
    }

    while(temp->next!=NULL && temp->next->expo >=e)
        temp=temp->next;
    newnode->next=temp->next;
    temp->next=newnode;
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

void like_terms(){
    node *temp;
    node *ptr=head;
    while(ptr->next!=NULL){
        if(ptr->expo==ptr->next->expo){
            ptr->coef+=ptr->next->coef;
            temp=ptr->next;
            ptr->next=ptr->next->next;
            free(temp);
            temp=NULL;
        }
        else
            ptr=ptr->next;
    }

}
~eq(){
        node* current = head;
        node* next_node;
        while (current != nullptr) {
            next_node = current->next;
            delete current;
            current = next_node;
        }
        head = nullptr;
    }
eq mul_pol(eq p1, eq p2, eq& result){
    node* t1=p1.head;
    result.head=nullptr;
    while(t1!=NULL){
        node* t2=p2.head;
        while(t2!=NULL){
            int c=t1->coef*t2->coef;
            int e=t1->expo+t2->expo;
            result.insert(c,e);
            t2=t2->next;
        }
        t1=t1->next;
    }
    result.like_terms();
    return result;
}
};

 int main(){
    eq myeq1,myeq2,result;
    myeq1.insert(2, 3);
    myeq1.insert(-3, 1);
    myeq1.insert(2, 0);
    // myeq1.like_terms();
    myeq1.print();
    myeq2.insert(5, 3);
    myeq2.insert(-9, 4);
    myeq2.insert(12, 0);
    myeq2.print();
    result.mul_pol(myeq1, myeq2, result);
    result.print();
return 0;
}