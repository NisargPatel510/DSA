#include<queue>
#include<iostream>
using namespace std;
int main(){
    queue<int> s1;
    s1.push(45);
    s1.push(36);
    s1.push(23);
    s1.push(98);
cout<<endl<<s1.size()<<endl;
    while(!s1.empty()){
        cout<<s1.front()<<" ";
        s1.pop();//it removes from the front.
    }
    cout<<endl<<s1.size();
    
    return 0;
}