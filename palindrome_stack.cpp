#include<stack>
#include<iostream>
#include<string.h>
using namespace std;
// class mystack{
//     public : 
//     stack<char> s1;
// };
int is_palindrome(string s){
    int i=0;
    stack<char> st;
    while(s[i]!='X'){
        st.push(s[i]);
        i++;
    }
    i+=1;
    while(!st.empty()){
        if(st.top()==s[i])
        {
            st.pop();
            i++;
        }
        else
            return 0;
    }
    return 1;
}
int main(){
    stack<char> s1;
    string input,input2, reversed;
    cout<<"1.Enter string here:";
    cin>>input;
    cout<<"2.Enter divided stirng with X:";
    cin>>input2;
    for(char c : input)
        s1.push(c);
    while(!s1.empty()){
        reversed+=s1.top();
        s1.pop();
    }
    if(input==reversed)
    cout<<"String 1 is a palindrome !!\n";
    else
    cout<<"String 1 is not a pallindrome !!\n";

    if(is_palindrome(input2))
            cout<<"String 2 is a palindrome !!\n";
    else
            cout<<"String 2 is not a pallindrome !!\n";
return 0;
}