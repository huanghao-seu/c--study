#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;
    int x=0;
    do{
        cin>>x;
        arr.push_back(x);
    }while(x!=0);
    reverse(arr.begin(),arr.end());
    for(int i:arr){
        if(i==0){
            continue;
        }
        cout<<i<<" ";
    }
    return 0;
}