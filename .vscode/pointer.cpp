#include <iostream>
#include <iterator> // 引入 std::begin, std::end
using namespace std;

int main() {
    int num = 10;
    int *p = &num;
    cout << "指针变量p中记录的地址是: " << p << endl;
    p++;
    cout<< "指针变量p进行了+1操作,记录的地址是: " << p << endl;

    double num2 = 10;      // double类型占用8个字节
    double * p2 = &num2;
    cout << p2 << endl;
    p2 += 4;
    cout << p2 << endl;
    int v[] = {1, 2, 3, 4,5 };//v本身为类似指针记录0的位置
    int *vp = v; // 指针中记录了数组0下标元素的地址

    cout<< "数组的第一个元素是: " << *vp << endl;
    cout<< "数组的第一个元素是: " << v[0] << endl;
    cout<< "数组的第二个元素是: " << *(vp+1) << endl;
    cout<< "数组的第二个元素是: " << v[1] << endl;
    *(vp+2)=33;
    cout<< "数组的第三个元素是: " << *(vp+2) << endl;
    cout<< "数组的第三个元素是: " << v[2] << endl;
    std::cout << "v: ";
    // auto 自动推导 p 为 int*
    for (auto p = std::begin(v); p != std::end(v); ++p) 
    {//for用的判断是！=
        std::cout << *p << " ";
    }

    

    return 0;
}