#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0;i<n;i++){
        int num=0;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                num++;
            }
        }
        cout<<num<<" ";
    }
    return 0;
}