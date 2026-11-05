#include<iostream>
using namespace std;

int main(){
    int n,min;
    cin>>n;
    min=1001;
  if(n<=1000){
    for(int i=1; i<=n;i++){
        int ai;
        cin>>ai;
        if(ai<=1000&&ai>=0){
          if(ai<min){
            min=ai;
         }
        }
    }
  }
    cout<<min<<endl;
    return 0;
}