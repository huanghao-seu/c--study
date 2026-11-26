#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int tem;
        cin>>tem;
        a.push_back(tem);
    }
    sort(a.begin(),a.end());
    auto i=unique(a.begin(),a.end());
    a.erase(i,a.end());
    cout<<a.size()<<endl;
    for(auto x:a){
        cout<<x<<" ";
    }
    return 0;
}
