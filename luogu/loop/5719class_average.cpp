#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int add1=0,add2=0;
    double count1=0,count2=0;
    for(int i=1;i<=n;i++){
        if(i%k==0){
            add2+=i;
            count2++;
        }
        else{
            add1+=i;
            count1++;
        }
    }
cout<<fixed<<setprecision(1)<<add2/count2<<" "<<add1/count1;
    return 0;
}