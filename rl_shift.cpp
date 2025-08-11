// Nisarg P Patel IT-104

#include<bits/stdc++.h>
//a>>b = a/2^b, a<<b = a*2^b;
using namespace std;

 int main(){
    float a,b;
    char c;
    cout<<"\nEnter value for A and B :\n";
    cin>>a>>b;
    cout<<"> ==  Right shift\n< == Left shift\n";
    cin>>c;
    cout<<"\n Answer =";
    switch (c){
        case '>':
        cout<<a/pow(2,b);
        break;

        case '<':
        cout<<a*pow(2,b);
        break;

        default :
        cout<<"\n Enter valid operand!\n";
        break;
    }
    
return 0; }