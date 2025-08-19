#include<iostream>
using namespace std;
class patterns{
    public :
    void p1(int n){
        cout<<"Rectangle of Star :\n";
        for(int i=0;i<n;i++){
            for(int j=0; j<n;j++)
                cout<<"*";
            cout<<endl;
        }
        cout<<endl<<endl;
    }

    void p2(int n){
        cout<<"Triangle of star:\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++)
                cout<<"*";
            cout<<endl;
        }
        cout<<endl<<endl;
    }
        void p3(int n){
        cout<<"Triangle of nums:\n";
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++)
                cout<<j;
            cout<<endl;
        }
        cout<<endl<<endl;
    }
        void p4(int n){
        cout<<"Triangle of nums:\n";
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++)
                cout<<i;
            cout<<endl;
        }
        cout<<endl<<endl;
    }

        void p5(int n){
        cout<<"Inverted triangle:\n";
        for(int i=n;i>0;i--){
            for(int j=i;j>0;j--)
                cout<<"*";
            cout<<endl;
        }
        cout<<endl<<endl;
    }

        void p6(int n){
        cout<<"Inverted triangle of nums:\n";
        for(int i=0;i<n;i++){
            for(int j=1;j<=n-i;j++)
                cout<<j;
            cout<<endl;
        }
        cout<<endl<<endl;
    }
        void p7(int n){
        int k,j;
        cout<<"Pyramid of star:\n";
        for(int i=0;i<n;i++){
            for(k=0;k<n-i;k++)
                cout<<" ";
            for(j=0;j<2*i+1;j++)
                cout<<"*";
            for(k=0;k<n-i;k++)
                cout<<" ";
            cout<<endl;
        }
        cout<<endl<<endl;
    }

    void p8(int n){
        int k,j;
        cout<<"Inverted Pyramid of star:\n";
        for(int i=0;i<n;i++){
            for(k=0;k<=i;k++)
                cout<<" ";
            for(j=0;j<2*(n-i)-1;j++)
                cout<<"*";
            for(k=0;k<=i;k++)
                cout<<" ";
            cout<<endl;
        }
        cout<<endl<<endl;
    }

    void p9(int n){
        int k,j;
        cout<<"Diamond of star:\n";
                for(int i=0;i<n-1;i++){
            for(k=0;k<n-i;k++)
                cout<<" ";
            for(j=0;j<2*i+1;j++)
                cout<<"*";
            for(k=0;k<n-i;k++)
                cout<<" ";
            cout<<endl;
        }
                for(int i=0;i<n;i++){
            for(k=0;k<=i;k++)
                cout<<" ";
            for(j=0;j<2*(n-i)-1;j++)
                cout<<"*";
            for(k=0;k<=i;k++)
                cout<<" ";
            cout<<endl;
        }
        cout<<endl<<endl;
    }

        void p10(int n){
        cout<<"Right arrow of star:\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++)
                cout<<"*";
            cout<<endl;
        }
                for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--)
                cout<<"*";
            cout<<endl;
        }
        cout<<endl<<endl;
    }
        void p11(int n){
        cout<<"Triangle of 01:\n";
        int start=1;
        for(int i=0;i<n;i++){
            start=i%2==0?1:0;
            for(int j=0;j<=i;j++){
                cout<<start;
                start=1-start;
            }
            cout<<endl;
        }
        cout<<endl<<endl;
    }
    void p12(int n){
        cout<<"Valley of num:\n";
        for(int i=1;i<=n;i++){
            int k=i;
            for(int j=1;j<=2*n;j++){
                if(j<=i)
                    cout<<j;
                else if(j>2*n-i){
                    cout<<k--;
                }
                else
                    cout<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
            void p13(int n){
        cout<<"Triangle of nums:\n";
        int k=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++)
                cout<<k++;
            cout<<endl;
        }
        cout<<endl<<endl;
    }
            void p14(int n){
        cout<<"Triangle of letters:\n";
        for(int i=0;i<n;i++){
            for(char ch='A'; ch<='A'+ i; ch++)
                cout<<ch;
            cout<<endl;
        }
        cout<<endl<<endl;
    }
        void p15(int n){
            cout<<"Inv Triangle of letters:\n";
        for(int i=n;i>0;i--){
            for(char ch='A'; ch<'A'+i; ch++)
                cout<<ch;
            cout<<endl;
        }
        cout<<endl<<endl;
    }
            void p16(int n){
            cout<<"Triangle of letters:\n";
        for(int i=0;i<n;i++){
            char ch='A'+i;
            for(int j=0; j<=i;j++)
                cout<<ch;
            cout<<endl;
        }
        cout<<endl<<endl;
    }
            void p17(int n){
        int k,j;
        cout<<"Pyramid of ABC:\n";
        for(int i=0;i<n;i++){
            for(k=0;k<n-i;k++)
                cout<<" ";
            int bp=(2*i+1)/2;
            char ch='A';
            for(j=0;j<2*i+1;j++){
                cout<<ch;
                if(j<=bp) ch++;
                else
                ch--;
            }
            for(k=0;k<n-i;k++)
                cout<<" ";
            cout<<endl;
        }
        cout<<endl<<endl;
    }
        void p18(int n){
        cout<<"Triangle of ABC:\n";
        for(int i=0;i<n;i++){
            char l='A' +n-1;
            for(char ch=l-i;ch<=l;ch++){
                cout<<ch;
            }
            cout<<endl;
    }
    cout<<endl<<endl;
}
    void p19(int n){
        int inS=0,j;
        for(int i=0;i<n;i++){
            for(j=0;j<n-i;j++)
                cout<<"*";
            for(j=0;j<=inS;j++)
                cout<<" ";
            for(j=0;j<n-i;j++)
                cout<<"*";
            cout<<endl;
            inS+=2;
        }
        inS-=2;
        for(int i=0;i<n;i++){
            for(j=0;j<=i;j++)
                cout<<"*";
            for(j=0;j<=inS;j++)
                cout<<" ";
            for(j=0;j<=i;j++)
                cout<<"*";
            cout<<endl;
            inS-=2;
        }
        cout<<endl<<endl;
        }
    void p20(int n){
        cout<<"Wing of star:\n";
        int inS=2*n-2;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++)
                cout<<"*";
            for(int j=0;j<inS;j++)
                cout<<" ";
            for(int j=0;j<=i;j++)
                cout<<"*";
            inS-=2;
            cout<<endl;
        }
        inS=2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++)
                cout<<"*";
            for(int j=0;j<inS;j++)
                cout<<" ";
            for(int j=0;j<n-i-1;j++)
                cout<<"*";
            inS+=2;
            cout<<endl;
        }
        cout<<endl;
    }
        void p21(int n){
        cout<<"Box of Star :\n";
        int l=2*n-1;
        for(int i=0;i<l;i++){
            for(int j=0; j<=l;j++){
                if(j==0 || j==l || i==0 || i==l)
                    cout<<"4 ";
                else cout<<"  ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
    }
};
int main(){
    cout<<"Patterns from TUF\n\n";
    patterns np;
    np.p1(5);
    np.p2(5);
    np.p3(5);
    np.p4(5);
    np.p5(5);
    np.p6(5);
    np.p7(5);
    np.p8(5);
    np.p9(5);
    np.p10(5);
    np.p11(5);
    np.p12(5);
    np.p13(5);
    np.p14(5);
    np.p15(5);
    np.p16(5);
    np.p17(5);
    np.p18(5);
    np.p19(5);
    np.p20(5);
    np.p21(5);
    return 0;
}