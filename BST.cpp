#include<bits/stdc++.h>
using namespace std;
class node{
    public:
int data;
node *left,*right;
node(int val){
    data =val;
    left=right=NULL;
}

};
class tree{
    private :
    node *root;
    void insertrec(node* &croot, int val){
        if(croot==NULL){
            node *newnode = new node(val);
            croot=newnode;
            return;
        }
        else if(val >= croot->data)
        {
            if(croot->right==NULL){
                node *newnode = new node(val);
                croot->right=newnode;
                return;
            }
            else
            insertrec(croot->right, val);
        }
        else if(val < croot->data)
        {
            if(croot->left==NULL){
                node *newnode = new node(val);
                croot->left=newnode;
                return;
            }
            else
            insertrec(croot->left, val);
        }    
    }
    public:
    tree(){
        root=NULL;
    }
    void insert(int val){
        insertrec(root, val);
    }
node* getroot(){return root;}
//Printing tree Inorder travesel;
vector<int> inorder(node *croot, vector<int> &v){
    if(croot==NULL)
        return v;
    inorder(croot->left,v);
    v.push_back(croot->data);
    inorder(croot->right,v);
    return v;
}

};

int main(){
    tree t1;
    cout<<"Tree creating...";
    t1.insert(45);
    t1.insert(56);
    t1.insert(36);
    t1.insert(98);
    t1.insert(104);
    t1.insert(68);
    t1.insert(26);
    cout<<"Tree created";
    vector<int> v;
    cout<<"Tree elements:"<<endl;
    for(auto it: t1.inorder(t1.getroot(), v))
        cout<<it<<" ";
    cout<<endl;

    return 0;
}