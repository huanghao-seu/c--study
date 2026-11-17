#include<iostream>
#include<vector>
using namespace std;

struct Stu{
    int id,sco,esco,sum,essum;
    void s(){
        essum=sco*7+esco*3;
        sum=sco+esco;
    }
};

void jud(Stu a){
    if(a.sum>140&&a.essum>=800){
        cout<<"Excellent"<<endl;
    }
    else{
        cout<<"Not excellent"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    vector<Stu>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].id;
        cin>>arr[i].sco;
        cin>>arr[i].esco;
        arr[i].s();
    }
    for(int i=0;i<n;i++){
        jud(arr[i]);
    }
    return 0;
}