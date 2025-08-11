// Nisarg P Patel IT-104

#include<stdio.h>
#include<cstring>
#include<math.h>
#include<iomanip>
#include<iostream>
using namespace std;
class stack{
    public:
    int n=5,top=-1;
    int arr[5];
    void push(int val){
        if(top>=5)
        cout<<"\nStack over flow !\n";
        else{
            top++;
            arr[top]=val;
        }
    }

    void pop(){
        if(top==-1){cout<<"Stack under flow !";  return;}
        else{
        cout<<"popped :"<<arr[top]<<endl;
        top--;
        }
    }
    void print(){
        cout<<"Stack elements :";
        if(top==-1){cout<<"Stack empty !\n"; return;}
        while(top>=0){
            cout<<arr[top]<<" ";
            top--;
        }
        top=4;
        cout<<endl;
    }
};
 int main(){
stack a,b;
a.push(45);
a.push(30);
a.push(56);
a.push(104);
a.push(98);
a.print();
a.pop();
a.pop();
a.print();
// b.pop();
return 0; }