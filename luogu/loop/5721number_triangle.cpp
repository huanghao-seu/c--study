#include<iostream>
using namespace std;

int main(){
    int n,num=1;                                                                                                                                                                                              ;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            if(num<10){
                cout<<"0"<<num;
            }
            else{
                cout<<num;
            }
            num++;
        }
        cout<<"\n";
    }

    return 0;
}