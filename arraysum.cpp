// #include<stdio.h>
// #include<cstring>
// #include<math.h>
#include<iostream>

using namespace std;
int add(int b[],int len){
    int sum=0;
    for(int i=0; i< len ; i++){
        sum+=b[i];
    }
    return sum;
}

int main(){
    cout<<"\tHello there !";
    int arr[5]={2,4,6,7,9}, len;
    len=sizeof(arr)/sizeof(arr[0]);
    cout<<len;
    cout<<endl<<"Sum of array : "<<add(arr, len);
return 0;
}