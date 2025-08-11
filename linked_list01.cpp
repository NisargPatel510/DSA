// Nisarg P Patel IT-104

#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<math.h>
#include<iomanip>
#include<iostream>

using namespace std;
typedef struct node {
    int data;
    struct node *link;
} list;
int main(){
    list *head=(list *)malloc(sizeof(list));
    head->data=45;
    head->link=NULL;

    list *current=(list *)malloc(sizeof(list));
    current->data=98;
    current->link=NULL;
    head->link=current;

    current=(list *)malloc(sizeof(list));
    current->data=3;
    current->link=NULL;
    head->link->link=current;

    cout<<head->data<<" "<<head->link->data<<" "<<head->link->link->data;
    return 0;
}
