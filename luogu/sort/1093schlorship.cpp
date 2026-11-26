#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
struct stu{
    int ch,ma,en,sum,id;
    void add(){
        sum=en+ma+ch;
    }
};

int main(){
    vector<stu>arr;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        stu a;
        cin>>a.ch>>a.ma>>a.en;
        a.id=i;
        a.add();
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end(),[](stu&a,stu&b){
        if(a.sum!=b.sum)return a.sum>b.sum;
        if(a.ch!=b.ch)return a.ch>b.ch;
        return a.id<b.id;
    });
    for(int i=0;i<5;i++){
        cout<<arr[i].id<<" "<<arr[i].sum<<endl;
    }
    return 0;
}
