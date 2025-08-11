// Nisarg P Patel IT-104

#include<stdlib.h>
#include<iostream>
#include "linked_listf.hpp"

using namespace std;
typedef struct node {
    int data;
    struct node *link;
} list;
int main(){
    int a[6]={12, 43, 32 , 56 , 67 , 98};
list *head=(list*)malloc(sizeof(list));
head->data=45;
head->link=NULL;
list *ptr;
for(int i=0;i<6; i++)
    head=add_end(head, a[i]);

    printlist(head);
    cout<<endl<<" Gm ";
return 0; }