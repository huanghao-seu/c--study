#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int n=0;
    std::cin>>n;
    std::vector<int>arr;
     for(int i=0;i<n;i++){
       int tem;
        std::cin>>tem;
        arr.push_back(tem);
     }
     sort(arr.begin(),arr.end());
     for(auto j:arr){
        std::cout<<j<<" ";
     }
     return 0;
}
