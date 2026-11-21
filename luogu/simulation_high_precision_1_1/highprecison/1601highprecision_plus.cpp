#include <vector>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
  vector<int> a,b,d;
  string s2,s1;
  cin>>s1>>s2;
  reverse(s1.begin(),s1.end());
  reverse(s2.begin(),s2.end());
  for(char x:s1){
    a.push_back(x-'0');
  }
  for(char x:s2){
    b.push_back(x-'0');
  }
  int carry=0;
  int len=max(a.size(),b.size());
  for(int i=0;i<len;i++){
     int sum=carry;
     if(i<a.size()){
        sum+=a[i];
     }
     if(i<b.size()){
         sum+=b[i];
     }
     d.push_back(sum%10);
     carry=sum/10;
  }
    if(carry)d.push_back(carry);
    reverse(d.begin(),d.end());
    for(auto pro:d){
    cout <<pro;
    }
    return 0;
   }