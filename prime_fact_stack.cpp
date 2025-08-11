#include<stack>
#include<iostream>
using namespace std;
stack<int> prime_fact(int n){
    stack<int> res;
    int i=2;
    while(n!=1){
        while(n%i==0){
            res.push(i);
            n=n/i;
        }
        i++;
    }
    return res;
    }
int main(){
    cout<<"Enter number :";
    int n;
    cin>>n;
    stack<int> result=prime_fact(n);
    cout<<"Prime factore of"<<n<<": ";
    while(!result.empty()){
        cout<<result.top()<<" x ";
        result.pop();
    }
    cout<<"1"<<endl;
    return 0;
}