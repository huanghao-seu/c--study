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
// 1. 得到一个随机数 1-100 范围
int num = get_random_num(1, 100);
// cout << num << endl; // 测试用，平时隐藏

// 2. 准备变量
int guess_num;
int count = 0; // 增加一个计数器，记录猜了几次

// 3. 直接进入 do...while 循环
do {
    cout << "请输入你猜的数字: ";
    cin >> guess_num; 
    count++; // 猜了一次，计数器加1

    // 4. 判断大小
    if (guess_num > num) {
        cout << "猜大了！" << endl;
    } else if (guess_num < num) {
        cout << "猜小了！" << endl;
    } else {
        cout << "恭喜你，猜中了！" << endl;
    }

} while (guess_num != num); // 只要没猜中（不等于），就继续循环

// 5. 循环结束，说明猜中了，输出次数
cout << "你总共猜了 " << count << " 次！" << endl;



}