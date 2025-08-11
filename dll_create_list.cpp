// Nisarg P Patel IT-104
#include<stdio.h>
#include<cstring>
// #include<math.h>
#include<iomanip>
#include<iostream>
using namespace std;

typedef struct node{
    struct node *prev;
    int data;
    struct node *next;
}Node;

void print(Node *head){
    if(head==NULL){cout<<"\nDLL is Empty!!\n"; return;}
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

struct node* makenode(struct node *head, int data){
    Node* t=new Node;
    t->prev=NULL;
    t->data=data;
    t->next=NULL;
    head=t;
}

void add_end(struct node* head, int data){
    Node *t=new Node;
    Node *ptr=head;
    t->prev=NULL;
    t->data=data;
    t->next=NULL;

    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=t;
    t->prev=ptr;
}
struct node* createlist(struct node* head){
    int n,data,i;
    char ans[3];
    cout<<"\nEnter no.of nodes :";
    cin>>n;
    if(n==0)return head;
    else if(n==1){
        cout<<"\nEnter element : ";
        cin>>data;
        Node* t= new Node;
        t->prev=NULL;
        t->data=data;
        t->next=NULL;
        head=t;
        return head;
    }
    cout<<"\nEnter data for node 1 :";
    cin>>data;
    head=makenode(head,data);
    for(i=2; i<=n; i++){
        cout<<"Enter data for node "<<i<<" :";
        cin>>data;
        add_end(head,data);
    }
    cout<<"\nList created !\nDo you want to print it?(yes/no) :";
    cin>>ans;
    if(strcmp(ans,"yes")==0)
        print(head);
    else cout<<"\nOhkay, have a nice day!\n"; 
    return head;
}
struct node* del(struct node *head){
    if(head==NULL) return NULL;
    Node* temp=head;
    if(head->next==NULL){free(temp); return NULL;}
    head=head->next;
    head->prev=NULL;
    free(temp);
    return head;
}
void del_last(struct node* head){
    Node *temp2,*temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp2=temp->prev;
    temp2->next=NULL;
    free(temp);
}

void del_pos(struct node *head, int pos){
    Node *temp2=head,*temp=head;
    while(pos>1)
        {temp=temp->next;pos--;}
    // cout<<endl<<temp->data<<endl;
    temp2=temp->prev;
    temp2->next=temp->next;
    temp->next->prev=temp2;
    free(temp);
    temp=NULL;
}
struct node* rev(struct node* head){
    Node *temp,*temp2;
    temp2=head;
    while(temp2->next!=NULL)
        temp2=temp2->next;
    head=temp2;
    temp2->next=NULL;
    return head;
}
 int main(){
    Node *head=new Node;
    head=NULL;
    head=createlist(head);
    head=rev(head);
    // head=del(head);
    // del_last(head);
    // del_pos(head,3);
    print(head);
return 0;
}