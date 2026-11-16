#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
struct Student{
    string name;
    int ch,ma,en;
 //   int sum=ch+ma+en;这是错的
    int  sum;
    int id;
};
bool cmp(const Student&a,const Student&b){
    if(a.sum!=b.sum)return a.sum>b.sum;
    return a.id<b.id;
}

int main(){
    int n;
    cin>>n;
    vector<Student>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].ch>>a[i].ma>>a[i].en;
        a[i].sum=a[i].ch+a[i].ma+a[i].en;
        a[i].id=i;
    }
    sort(a.begin(),a.end(),cmp);
    cout<<a[0].name<<" "<<a[0].ch<<' '<<a[0].ma<<" "<<a[0].en<<endl;
    return 0;
}