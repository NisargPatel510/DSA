#include<stack>
#include<iostream>
#include<string.h>
using namespace std;

int prec(char c){
    switch ('c'){
        case '^':
        return 3;
        case '/':
        case '*':
        return 2;
        case '+':
        case '-':
        return 1;
        default:
        return 0;
}
}
string to_postfix(string in){
    int i=0;
    stack<int> st;
    char c;
    string res="";
    for(i=0;i<in.length();i++){
    c=in[i];
    if(isalpha(c))
        res=res+c;
    else if(c=='+' ||c=='-' ||c=='/' ||c=='*' ||c=='^'){
        if(prec(st.top())>=prec(c)){
        res=res+st.top();
        st.pop();
        st.push(c);
        }
        else
            st.push(c);
    }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
   return res; 
}
int main(){
    cout<<"\nEnter infix expression here :";
    string input;
    cin>>input;
    string result=to_postfix(input);
    cout<<endl<<result;
    return 0;
}