#include<stack>
#include<iostream>
using namespace std;
int main(){
    stack<int> s1;
    s1.push(45);
    s1.push(36);
    s1.push(23);
    s1.push(98);
cout<<endl<<s1.size()<<endl;
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl<<s1.size();
    
    return 0;
}