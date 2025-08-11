// Nisarg P Patel IT-104
#include<stdio.h>
#include<iomanip>
#include<iostream>
using namespace std;
class node{
    public:
    int dig;
    node *next;
    node(int val){
        dig=val;
        next=nullptr;
    }
};
class list{
    node *head;
    public:
    list(){
        head=nullptr;
    }
    ~list(){
        node* current=head;
        while(current!=NULL){
            node* ptr=current->next;
            delete current;
            current=ptr;
        }
        head=NULL;
    }
    void add_num(int n){
        int d;
        while(n>0){
        d=n%10;
        node *newnode= new node(d);
        newnode->next=head;
        head=newnode;
        n=n/10;
    };
    }
void push(int val){
    node *temp=head;
    node *newnode = new node(val);
    if(temp==nullptr){
        head=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}
void print(){
    if(head==nullptr)
        cout<<"No number!\n";
    node* temp=head;
    cout<<"My list :";
    while(temp->next!=nullptr){
        cout<<temp->dig<<"->";
        temp = temp->next; // Crucial: move to the next node
    }cout<<temp->dig;
    cout << endl;
}
// void sortll() {
//     if (head == nullptr || head->next == nullptr) {
//         return;
//     }
//     node* current = head;
//     node* index = nullptr;
//     int temp_data;
//     while (current != nullptr) {
//         index = current->next;
//         while (index != nullptr) {
//             if (current->dig > index->dig) {
//                 swap(current->dig, index->dig);
//             }
//             index = index->next;
//         }
//         current = current->next;
//     }
// }
// void swap(int &t1, int &t2){int temp;temp=t1;t1=t2;t2=temp;};

void reverse(){
node* current=NULL;
node* nxt=head->next;
while(nxt!=NULL){
current=nxt;
nxt=nxt->next;
current->next=head;
head=current;
}
}
list add_ll(list& l1, list& l2){
    l1.reverse();
    l2.reverse();
    node* t1=l1.head;
    node* t2=l2.head;
    list result;
    int sum=0, carry=0;
    while(t1 || t2){
        sum=0;
        if(t1)
            sum+=t1->dig;
        if(t2)
            sum+=t2->dig;
        sum+= carry;
        carry=sum/10;
        sum=sum%10;
        result.push(sum);
        if(t1)
            t1=t1->next;
        if(t2)
            t2=t2->next;   
    }
    if(carry)
        result.push(carry);
    return result;
}
};
int main(){
    list l1,l2,l3;
    long int num1,num2;
    cout<<"Enter your num1 here :";
    cin>>num1;
    l1.add_num(num1);
    l1.print();
    cout<<"Enter your num2 here :";
    cin>>num2;
    l2.add_num(num2);
    l2.print();
    l3=l3.add_ll(l1,l2);
    l3.print();
return 0; }