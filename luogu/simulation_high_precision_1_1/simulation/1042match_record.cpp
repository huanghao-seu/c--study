#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string a = "";
    char c;
    while (cin >> c && c != 'E') {
        a += c;
    }
    int rule[2]={11,21};
    for(int i=0;i<2;i++){
         int co1=0,co2=0;
        for(auto j:a){
            if(j=='W'){
                co1++;
            }
            else{
                co2++;
            }
            if(abs(co1-co2)>=2&&(co1>=rule[i]||co2>=rule[i])){
                cout<<co1<<':'<<co2<<endl;
                co1=0;
                co2=0;
            }
        }
        cout<<co1<<':'<<co2<<endl;
        if(i==0)
        cout<<endl;
    }
    return 0;
}