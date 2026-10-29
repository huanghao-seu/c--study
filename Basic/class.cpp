#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    int balance=0;
    void add_interest(){
        balance+=10;
    }
public:
    string id;
    void show_balance(){
        cout<<id<<"余额为："<<balance<<endl;
    }
    BankAccount(string id_){
        id=id_;
    }
    void deposit(int amount){
        balance+=amount;
        cout<<"成功存入"<<amount<<"元"<<endl;
        add_interest();
    }
};

int main(){
   class BankAccount myAccount("哈哈");
   myAccount.deposit(500);
   myAccount.show_balance();
}