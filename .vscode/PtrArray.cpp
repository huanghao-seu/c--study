#include <iostream>
using namespace std;

int main() {
    int * pArr = new int[10] {3, 5, 1, 11, 99, 66, 22, 2, 8, 6};
    int length = 10;
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (pArr[j] > pArr[j + 1]) {
                int temp = pArr[j];
                pArr[j] = pArr[j + 1];
                pArr[j + 1] = temp;
            }
        }
    }
    cout << "排序后的数组: {";
    for (int i = 0; i < length; i++) {
        cout << pArr[i];
        if (i < length - 1) cout << ", "; 
    }
    cout << "}" << endl;
    delete[] pArr;
    pArr = nullptr; 

    return 0;
}