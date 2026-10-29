#include<iostream>
using namespace std;
//goto尽量不用
void check_balance(string*name,int *balance){
     cout<<*name<<"当前余额为:"<<*balance<<endl;
}
void deposit(string*name,int*balance,int money){
     *balance+=money;
     cout<<*name<<"存款后,余额为:"<<*balance<<endl;
}
void withdrawl(string*name,int*balance,int money){
    *balance-=money;
    cout<<*name<<"取款后,余额为:"<<*balance<<endl;
}
int main_menu(string*name){
    cout<<*name<<"欢迎来到hh银行"<<"请选择操作"<<endl;
    cout<<"查询余额:  1"<<"\n"<<"存款:  2"<<"\n"<<"取款:  3"<<"\n"<<"退出:  4"<<endl;
    cout<<"请输入"<<endl;
    int num;
    cin>>num;
    return num;
}

int main(){
  string name;
   cout<<"请输入名字"<<endl;
   cin>>name;
   int *balance=new int;
   *balance=500000;
   bool run=true;
   while(run){
      int select= main_menu(&name);
      int money;
      switch(select){
      case 1:
        check_balance(&name,balance);
        break;
      case 2:
        cout<<"要存入：";
        cin>>money;
        deposit(&name,balance,money);
        break;
      case 3:
        cout<<"要取出：";
        cin>>money;
        withdrawl(&name,balance,money);
        break;
      default:
         cout << "输入无效！" << endl;
         run = false;
         break;   
   }
  }delete balance;
   return 0;
}