#include <iostream>
#include <string>
#include<cctype>
using namespace std;

int main() {
    int count=0,a=-1;
    string sen,word;
    getline(cin,word);
    getline(cin,sen);
    for(int i = 0; i < word.size(); i++) word[i] = tolower(word[i]);
    for(int i = 0; i < sen.size(); i++) sen[i] = tolower(sen[i]);
    //注意不要越界，取绝对值
    for(int i=0;i<=sen.size()-word.size();++i){
        bool match=1;
        for(int j=0;j<word.size();++j){
            if(sen[i+j]!=word[j]){
                match=0;
                break;
            }
        }
            if(match){
                bool left_ok = (i == 0 || sen[i-1] == ' ');
                bool right_ok = (i + word.size() == sen.size() || sen[i + word.size()] == ' ');
            if(left_ok && right_ok) {
                count++; 
                if(a == -1) {
                    a = i; 
                }
            }
            }
        
    }
    if(count == 0) {
      cout <<"-1"<< endl;
    } 
    else {
        cout << count << " " << a << endl;
    }
    return 0;
}