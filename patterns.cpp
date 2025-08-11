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
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if(j==i)
                    cout<<1;
                else if(j-i==1 || j-i==-1 || i-j==4 )
                    cout<<0;
                else if( j-i==2 || j-i==-2)
                    cout<<1;
                else if(i-j==3)
                    cout<<0;
                else if(i-j==4)
                    cout<<6767;//no effect
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

         




    return 0;
}