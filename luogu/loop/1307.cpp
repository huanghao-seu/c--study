#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int reverse=0;
    do{
        int num=n%10;
        reverse=reverse*10+num;
        n/=10;
    } while(n!=0);
    cout<<reverse<<endl;
    return 0;
}