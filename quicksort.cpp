#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void swap(int &a,int &b){
int t=b;
b=a;
a=t;
}
vector<int> qs(vector<int>&arr, int low,int high){
    if(low<high){
    int p=part(arr,low,high);
    qs(arr,low,p-1);
    qs(arr,p+1,high);
    }
    return arr;
}
    int part(vector<int>&arr,int low, int high){
        int piv=arr[low];
        int i=low;
        int j=high;
        while(i<j){
            while(arr[i]<=piv && i<=high-1)
            i++;
            while(arr[j]>piv && j>=low+1)
            j--;
        if(i<j)swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
        return j;
    }

    vector<int> quickSort(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        return qs(nums,low , high);
    }
};
int main(){
Solution s1;
int arr[10]={2,5,8,3,1,8,0,6,78,91};
vector<int> v;
for(int i=0;i<10;i++)
v.push_back(arr[i]);
for(auto it: s1.quickSort(v))
cout<<it<<" ";
cout<<endl;
return 0;
}