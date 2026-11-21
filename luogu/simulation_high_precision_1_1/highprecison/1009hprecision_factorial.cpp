#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<int> multiply(vector<int> a, int b) {
    int carry = 0; 
    for (int i = 0; i < a.size(); i++) {
        int temp = a[i] * b + carry;
        a[i] = temp % 10;  
        carry = temp / 10; 
    }
    while (carry) {
        a.push_back(carry % 10);
        carry /= 10;
    }
    return a;
}
vector<int> add(vector<int> a, vector<int> b) {
    if (a.size() < b.size()) return add(b, a); 
    int carry = 0;
    for (int i = 0; i < a.size(); i++) {
        int sum = a[i] + carry;
        if (i < b.size()) sum += b[i];
        a[i] = sum % 10;
        carry = sum / 10;
    }
    if (carry) a.push_back(carry);
    return a;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(1,1),sum=arr;
    for(int i=2;i<=n;i++){
        arr=multiply(arr,i);
        sum=add(arr,sum);
    }
    reverse(sum.begin(),sum.end());
    for(auto a:sum){
        cout<<a;
    }
    return 0;
}