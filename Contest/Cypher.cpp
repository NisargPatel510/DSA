#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int a[101];
int test;
int s=0,ch=0;
int num=0;
cout<<"test :";
cin>>test;
cout<<"num :";
for(int i=0;i<test;i++){
    cin>>num;
for(int j=0;j<num;j++){
    cin>>a[j];
    //cout<<a[j]<<" ";
}
for(int k=0;k<num;k++){
    cout<<"no. of char:";
    cin>>ch;
    string move;
    for(int z=0;z<ch;z++){
        cin>>move[z];
    }
    for(int n=0; n<move.length();n++){
        if(move[n]=='U'){
            if(a[k]==0)
                a[k]==9;
            else
            a[k]=a[k]-1;
        }
        else if(move[n]=='D'){
        if(a[k]==9){
            a[k]==0;
        continue;
        }
        a[k]=a[k]+1;
        }
    }
    }
}
cout<<"ANSWER:";
for(int s=0;s<num;s++)
cout<<a[s]<<" ";
cout<<endl;
//cout<<endl;
    

return 0;
}