#include<iostream>
using namespace std;

int main(){
    int n,x,count=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        int tem=i;
        do{
            if(tem%10==x){
                count++;
            }
           tem/=10;
        }while(tem>0);
    }
        cout<<count<<endl;
    return 0;
}