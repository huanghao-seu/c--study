#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    if(a == "0" || b == "0"){
        cout << 0 << endl;
        return 0;
    }
    vector<int> n1, n2;
    for(int i = a.size() - 1; i >= 0; i--) n1.push_back(a[i] - '0');
    for(int i = b.size() - 1; i >= 0; i--) n2.push_back(b[i] - '0');
    vector<int> res(n1.size() + n2.size(), 0);
    for(int i = 0; i < n1.size(); i++){
        for(int j = 0; j < n2.size(); j++){
            res[i + j] += n1[i] * n2[j];
        }
    }
    int carry = 0;
    for(int i = 0; i < res.size(); i++){
        int total = res[i] + carry;
        res[i] = total % 10;
        carry = total / 10;
    }
    if(carry > 0){
        res.push_back(carry);
    }
    bool is_leading_zero = true;
    for(int i = res.size() - 1; i >= 0; i--){
        if(res[i] != 0) is_leading_zero = false; 
        if(!is_leading_zero){
            cout << res[i];
        }
    }
    cout << endl;

    return 0;
}