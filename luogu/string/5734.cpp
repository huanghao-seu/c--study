#include<iostream>
#include<string>
using namespace std;

int main(){
    int q;
    cin>>q;
    string sen;
    cin>>sen;
    for(int i=q;i>0;i--){
        int num;
        cin>>num;
        switch (num){
            case 1:{
              string sen1;
              cin>>sen1;
              sen+=sen1;
              cout<<sen<<endl;
              break;
            }
            case 2:{
              int a,b;
              cin>>a>>b;
              sen=sen.substr(a,b);
              cout<<sen<<endl;
              break;
            }
            case 3:{
                int a;
                cin>>a;
                string sen2;
                cin>>sen2;
                sen.insert(a,sen2);
                cout<<sen<<endl;
                break;
            }
            case 4:{
                string sen3;
                cin>>sen3;
                auto num=sen.find(sen3);
                if(num== string::npos){
                    cout<<-1<<endl;
                }
                else{
                    cout<<num<<endl;
                }
                break;
            }      
        }
    }
    return 0;
}