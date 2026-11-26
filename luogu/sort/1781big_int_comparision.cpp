#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct pe{
    int id;
    string s;//string能直接比大小，""不行
};
bool cmp(pe&a,pe&b){
    if(a.s.length()!=b.s.length())return a.s.length()>b.s.length();
    return  a.s>b.s;
}

int main(){
    int n;
    cin>>n;
    vector<pe>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].s;
        arr[i].id=i+1;
        }
    sort(arr.begin(),arr.end(),cmp);
    cout<<arr[0].id<<"\n"<<arr[0].s;
    return 0;
}
