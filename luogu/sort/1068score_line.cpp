#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
struct sc{
    int score,id;
};

int main(){
    int n,k;
    cin>>n>>k;
    int a=k*3/2;
    vector<sc>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].id;
        cin>>arr[i].score;
    }
    sort(arr.begin(),arr.end(),[](sc& a,sc &b){
         if(a.score!=b.score)return a.score>b.score;
         return a.id<b.id;
    });
    int line=arr[a-1].score;
    int cnt=a;
    while(cnt<n&&arr[cnt].score==line)cnt++;
    cout<<line<<" "<<cnt<<endl;
    for(int i=0;i<cnt;i++){
      cout<<arr[i].id<<" "<<arr[i].score<<endl;
    }
    return 0;
}
