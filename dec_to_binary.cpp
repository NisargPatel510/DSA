// Nisarg P Patel IT-104
#include <iostream> // Required for input/output operations (std::cout)
#include <string>   // Required for using std::string
#include <algorithm> // Required for std::reverse
#include<stack>
using namespace std;
class bases{
    public :
    int decimal;
    long int b;
    int o;
    stack<int> dec;
    // string hex;
    bases(int val){
        decimal=val;
        }
    stack<int> binary(){
        // string result="";
        int n=decimal;
        while(n>0){
        if(n%2==1)
            // result+= '1';
            dec.push(1);
        else
            // result+= '0';
            dec.push(0);
        n=n/2;
        }
        // reverse(result.begin(), result.end());
        // return result;
        return dec;
    }
};
using namespace std;
 int main(){
bases a1(34), a2(23);
// string bin=a2.binary();
cout<<"34 to binary is : ";
stack<int> res =a1.binary();
while(!res.empty()){
    cout<<res.top();
    res.pop();
}
return 0; 
}
/*
stack<int> dec2bin(int num){
while(num!=0){
dec.push(num%2);
num/=2;
}
}
*/