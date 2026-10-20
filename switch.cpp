#include<iostream>
using namespace std;

enum Orderstatus{
 PENDING=1,//默认从0开始，可以定义从何开始
 PAID,//逐渐加1
 SHIPPED,
 COMPLETED,
};
 
int main(){
 int input;
  cout<<"请输入订单状态(1~4)"<<endl;
  cin>>input;

  switch(input){
   case PENDING:
   cout<<"订单待支付,请支付"<<endl;
   break;
   
   case SHIPPED:
   case PAID:
   cout<<"订单已支付"<<endl;
   break;
     
   case COMPLETED:
   cout<<"订单已完成"<<endl;
   break;
  
   default:
   cout<<"无效"<<endl;
   break;
   }
  
  



  return 0;
}