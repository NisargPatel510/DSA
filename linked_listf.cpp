#include "linked_listf.hpp"
#include <stdlib.h>
#include <iostream>
#include<stdio.h>
#include <iomanip>
using namespace std;
struct node {
    int data;
    struct node *link;
};
struct node* add_end( struct node *ptr, int num){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    temp->link=NULL;

    ptr->link=temp;
    return temp;
}

void printlist(struct node * head){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
}