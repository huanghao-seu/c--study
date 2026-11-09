#include<iostream>
#include<vector>
using namespace std;

int main(){ 
    vector<int>arr;
    int n;
    cin>>n;
    while(n!=1){
        arr.push_back(n);
       if(n%2==0){
         n/=2;
       }
       else{
        n=n*3+1;
       }
    }arr.push_back(1);
    for(auto i=arr.rbegin();i!=arr.rend();++i){
        cout<<*i<<" ";//记得解引用
    }
       return 0;
    }