#include<iostream>
#include<vector>
using namespace std;
std::vector<int>arr;
void qsort(vector<int>&arr,int l,int r){
    int x=l,y=r,mid=arr[(x+y)/2];
    while(x<=y){
        while(arr[x]<mid)x++;
        while(arr[y]>mid)y--;
        if (x<=y)
        {
          swap(arr[x],arr[y]);
          x++;
          y--;
        }
    }
//此时y<x,y与x相差1，分界线为yx之间
    if(y>l)qsort(arr,l,y);
    if(x<r)qsort(arr,x,r);
}

int main(){
    int n=0;
    std::cin>>n;
     for(int i=0;i<n;i++){
       int tem;
        std::cin>>tem;
        arr.push_back(tem);
     }
     qsort(arr,0,n-1);
     return 0;
    }
