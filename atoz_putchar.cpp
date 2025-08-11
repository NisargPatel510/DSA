#include<iostream>
#include<cstring>
 
using namespace std;
int main(){
    char s1[30]="Contents of str 2";
    char s2[30];
    char s3[30];
    strcpy(s3, "C++ Programming");
    strncpy(s2 , s1 , sizeof(s2));
    s2[sizeof(s2)-1]='\0';
    cout<<endl<<s2<<endl;
    cout<<strlen(s2);

    strcat(s1,s3);
    cout<<s1;
    

    //cout<<"\tHello there !\n";
    int ch ;
    ch='A';
    while(ch<='Z')
    {
        cout<<"\n";
        cout<<" ";putchar(ch);
        ch++;
    }


return 0;
}