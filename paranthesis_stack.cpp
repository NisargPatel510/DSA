#include<stack>
#include<iostream>
#include<cstring>
using namespace std;
bool isArithmeticOperator(char ch) {
    return (ch == '+' || 
            ch == '-' || 
            ch == '*' || 
            ch == '/' || 
            ch == '%');
   }
bool isvalid_par(string in){
    stack <int> s;
    int i;
    for(i=0;i<in.length();i++){
        if(in[i]=='{' ||in[i]=='(' ||in[i]=='[' ||in[i]=='<')
            s.push(in[i]);
        else if(in[i]=='}' ||in[i]==')' ||in[i]==']' ||in[i]=='>')
        {
            if(s.empty()){
                cout<<"Expression is Invalid !";
                return false;
            }
            char top=s.top();
            s.pop();
            if ((in[i] == '}' && top != '{') ||
                (in[i] == ')' && top != '(') ||
                (in[i] == ']' && top != '[') ||
                (in[i] == '>' && top != '<')) {
                cout << "Expression is Invalid: Mismatched brackets. Expected '" 
                     << top << "' for '" << in[i] << "' at position " << i << endl;
                return false; // Mismatched brackets
            }
        if (s.empty()) {
        return true; // All brackets are balanced
    } else {
        cout << "Expression is Invalid: Unmatched opening brackets remaining." << endl;
        return false; // Some opening brackets were not closed
    }
    }
    }
}

int main(){
    stack<int> s;
    string input;
    cin>>input;
    cout<<endl<<isvalid_par(input);
    return 0;
}