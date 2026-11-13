#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string reverseandtrim_advancezero(string s){
    reverse(s.begin(),s.end());
    size_t pos=s.find_first_not_of('0');
    if (pos == string::npos) {
        return "0";
    }
    return s.substr(pos);
}

int main(){
    string num;
    cin>>num;
    if(num.find('%')!=string::npos){
        num=num.substr(0,num.find('%'));
        string num1=reverseandtrim_advancezero(num)+'%';
        cout<<num1<<endl;
    }
    else if(num.find('/')!=string::npos){
        string num1=num.substr(0,num.find('/')), num2=num.substr(num.find('/')+1);
        num1=reverseandtrim_advancezero(num1);
        num2=reverseandtrim_advancezero(num2);
        cout<<num1+'/'+num2<<endl;
    }
        else if(num.find('.')!=string::npos){
        string num1=num.substr(0,num.find('.')), num2=num.substr(num.find('.')+1);
        num1=reverseandtrim_advancezero(num1);
        reverse(num2.begin(), num2.end());  
        size_t left = num2.find_first_not_of('0');   
        size_t right = num2.find_last_not_of('0');  
        if (left == string::npos) {
            num2 = "0";
        } else {
            num2 = num2.substr(left, right - left + 1);
        }
        cout<<num1+'.'+num2<<endl;
    }
    else{
        cout<<reverseandtrim_advancezero(num)<<endl;
    }
    return 0;
}