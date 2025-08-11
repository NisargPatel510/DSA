// Nisarg P Patel IT-104

#include<stdio.h>
#include<cstring>
#include<math.h>
#include<iomanip>
#include<iostream>

using namespace std;
typedef union{
    int i;
    char c;
    double d;

}data;
int main(){
    data arr[5];
    arr[0].i=10;
    arr[1].c='N';
    arr[2].d=3.7;

    cout<<arr[1].c<<" "<<
    arr[2].d;
    return 0;
}