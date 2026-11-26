#include<iostream>
#include<vector>
using namespace std;
int cn=0;
//相邻下，逆序对数为最小数
void ms(vector<int>&a,vector<int>&tem,int l,int r){
    if(l>=r)return ;
    int mid=(l+r)/2;
    //归并是从小到大，递归应在前面
    ms(a,tem,l,mid);
    ms(a,tem,mid+1,r);
    int i=l,j=mid+1,k=l;
    while(i<=mid&&j<=r){
        if(a[i]<=a[j])tem[k++]=a[i++];
        else{
            tem[k++]=a[j++];
            cn+=mid+1-i;
        }
    }
    while(i<=mid)tem[k++]=a[i++];
    while(j<=r)tem[k++]=a[j++];
    for(int t=l;t<=r;t++){
        a[t]=tem[t];
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n),tem(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ms(arr,tem,0,n-1);
    cout<<cn;
    return 0;
}
