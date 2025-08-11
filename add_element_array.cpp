// Nisarg P Patel IT-104

// #include<stdio.h>
// #include<cstring>
// #include<math.h>
// #include<iomanip>
#include<iostream>

using namespace std;
class array{
    public:
    int arr[6];

    void get_data(){
        int j;
        cout<<"\n Enter array elements : \n";
        for(j=0; j<5; j++){
            cin>>arr[j];
        }
    }

    void add_beg(int data){
        int i;
        for(i=5-1; i>=0; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[0]=data;
        // return (n+1);
    };
    void print(){
        int i=0;
        cout<<" Array elements\n ";
        while(i<6){
        cout<<arr[i]<<" ";
        i++;
        }
    }
};
 int main(){
array a;
a.get_data();
a.add_beg(98);
cout<<a.arr[4]<<" "<<a.arr[5];
cout<<endl;
a.print();
return 0; }