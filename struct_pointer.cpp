// Nisarg P Patel IT-104

#include<stdio.h>
#include<cstring>
#include<math.h>
#include<iomanip>
#include<iostream>

using namespace std;

int main(){

cout<<"\tHello there !";
typedef struct abd {
    int x,y;
}abc;

abc p={10,30};
abc *q=&p;
cout<<endl<<q->x<<endl<<q->y;
int r=-34;
cout<<abs(r);
return 0;
}