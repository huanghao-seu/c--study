#include <random>
#include <iostream>
using namespace std;
int get_random_num(int min, int max) {
    // 创建一个随机数生成器
    std::random_device rd; 
    std::mt19937 gen(rd()); 
    
    // 定义一个均匀分布的整数范围 (包含 min 和 max)
    std::uniform_int_distribution<> dis(min, max); 
    
    // 生成一个随机数
    int random_number = dis(gen); 
    return random_number;
}

int main(){
int money=10000;
for(int i=1;i<=20;i++){
    int num = get_random_num(1, 10);
    if(money<=0){
        cout<<"工资发完了,下个月领取吧"<<endl;
           break ; 
    }
    if(num<5){
       cout<<"员工"<<i<<",绩效分"<<num<<",低于5,"<<"不发工资,下一位"<<endl;
       continue;
     }
     money-=1000;
         cout<<"向员工"<<i<<"发放工资1000元,账户余额还剩余"<<money<<"元"<<endl;
}
return 0;
}
