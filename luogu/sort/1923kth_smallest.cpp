#include<iostream>
#include<vector>
using namespace std;
//可用nth_elements
void sortkth(vector<int>&arr,int k , int l,int r){
    if (l >= r) return;
    int pivot=arr[(l+r)/2];
    int  i=l,j=r;
    while(i<=j){
        while(arr[i]<pivot)i++;
        while(arr[j]>pivot)j--;
        if(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
        }
    }
    if(j>=k)sortkth(arr,k,l,j);
    if(i<=k)sortkth(arr,k,i,r);
}

int main(){
     // 1. 优化 I/O，防止大数据超时
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortkth(arr,k,0,n-1);
    cout<<arr[k];
}
