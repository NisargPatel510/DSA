// #include<stdio.h>
// #include<cstring>
// #include<math.h>
#include<iostream>

using namespace std;

int main(){
    cout<<"\tHello there !";
    int n,arr[n];
    int *p;
    cout<<" \nEnter size of array : ";
    cin>>n;
    cout<<"\nEnter Elements of array : ";
    for(int i=0; i< n; i++){
        cin>>arr[i];
    }

    cout<<"\n Contents of Array :\n";
    p=arr;
    for(p=arr; p < arr+n; p++ ){
        cout<<"\t"<<*p;
    }

return 0;
}