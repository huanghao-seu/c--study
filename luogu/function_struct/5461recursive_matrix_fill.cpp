#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<vector<int>>arr;

void sol(int x, int y, int size) {
    if (size == 1) {
        return;
    }
    int half = size / 2;
    for (int i = x; i < x + half; i++) {
        for (int j = y; j < y + half; j++) {
            arr[i][j] = 0;
        }
    }
    sol(x, y + half, half);         
    sol(x + half, y, half);        
    sol(x + half, y + half, half);  
}


int main(){
    int n,s;
    cin>>n;
    s=pow(2,n);
    arr.assign(s,vector<int>(s,1));
    sol(0,0,s);
    for (auto row : arr) { 
    for (auto val : row) { 
        cout << val << " ";
    }
    cout << endl; 
}
    return 0;
}