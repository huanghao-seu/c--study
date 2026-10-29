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
int arr[10];
  for(int a=1;a<=10;a++){
   int numa =get_random_num(1, 100);
   arr[a-1]=numa;
   cout<<numa<<" ";
   }
int max=arr[0],min=arr[0];
   for(int every:arr) {
    max=(every>max)?every:max;
    min=(every<min)?every:min;
   }
     cout<<max<<" "<<min<<endl;
   
return 0;
}