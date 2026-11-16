#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

struct Student{
    string name;
    int ch,ma,en;
    int  sum;
};

bool cmp(Student a, Student b) {
    return a.name < b.name;
}
bool dec(Student a,Student b){
    if(a.sum-b.sum<=10&&a.sum-b.sum>=-10){
        if(a.ch-b.ch<=5&&a.ch-b.ch>=-5){
            if(a.ma-b.ma<=5&&a.ma-b.ma>=-5){
                 if(a.en-b.en<=5&&a.en-b.en>=-5){
                    return  true;
                 }
             }
         }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<Student> a(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].ch >> a[i].ma >> a[i].en;
        a[i].sum = a[i].ch + a[i].ma + a[i].en;
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (dec(a[i], a[j])) { 
                cout << a[i].name << " " << a[j].name << endl;
            }
        }
    }
    
    return 0;
}