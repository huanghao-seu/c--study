#include <vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    if(a == "0" || b == "0"){
        cout << 0 << endl;
        return 0;
    }
    vector<int>n1,n2,cons;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(auto x:a){
        n1.push_back(x-'0');
    }
     for(auto x:b){
        n2.push_back(x-'0');
    }
    //这个写法有点繁琐
    vector<vector<int>>con(n1.size());
    for(int i=0;i<n1.size();i++){    
          int carry=0;
          for(int j=0;j<n2.size();j++){
            int total=n1[i]*n2[j]+carry;
            carry=total/10;
            con[i].push_back(total%10);
          }
          con[i].push_back(carry);
    }
    int carry=0;
    for(int i=0;i<n1.size()+n2.size();i++){
        int total=carry;
       for(int j=0;j<=i&&j<n1.size();j++){
         if(i-j<n2.size()+1){
            total+=con[j][i-j];
         }
       }
       carry=total/10;
       cons.push_back(total%10);
    }
    reverse(cons.begin(),cons.end());
    bool match=0;
    for(auto i:cons){
        if(!match){
            if(i!=0){
                match=1;
            }
        }
        if(match==1){
            cout<<i;
        }
    }
    return 0;
}