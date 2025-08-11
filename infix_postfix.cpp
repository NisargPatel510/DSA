#include<stack>
#include<iostream>
#include<string>
using namespace std;

int prec(char c){
    int prec;
    switch (c){
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
    stack<char> st;
    char c;
    string res="";
    for(i=0;i<in.length();i++){
    c=in[i];
    if(isalpha(c))
        res=res+c;
    else if(c=='+' ||c=='-' ||c=='/' ||c=='*' ||c=='^'){
        if(!st.empty() && prec(st.top()) >= prec(c)){
        while (!st.empty() && prec(st.top()) >= prec(c)){
        res=res+st.top();
        st.pop();
        }
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
void to_infix(string in){
    int c;
    int i;
    stack<int> st;
    for(i=0;i<in.length();i++){
        c=in[i];
        if(isalpha(c) || isdigit(c))
            st.push(c);
        else if(c=='+' ||c=='-' ||c=='/' ||c=='*' ||c=='^'){
            int ans=st.top();
            st.pop();
            ans+=st.top();
            st.pop();
            st.push(ans);
        }    
    }
    while(!st.empty()){
        cout<<"Answer :"<<st.top();
        st.pop();
    }
}

int main(){
    cout<<"\nEnter infix expression here :";
    string input,input2;
    cin>>input2;
    // string result=to_postfix(input);
    to_infix(input2);
    // cout<<endl<<result;
    return 0;
}