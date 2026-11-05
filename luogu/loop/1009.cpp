#include<iostream>
using namespace std;

int main(){
    int n;
    long sum=0,num=1;                                                                                                                                                                                              ;
    cin>>n;
//这样太复杂了
//   for(int i=1;i<=n;i++){
//      int numi=1;
//        for(int j=1;j<=i;j++){
//            numi*=j;
//        }
       for(int i=1;i<=n;i++){
        num*=i;
        sum+=num;
    }
    cout<<sum<<endl;
    return 0;
}