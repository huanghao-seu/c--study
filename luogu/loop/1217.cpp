#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    if (a <= 5 && b >= 5) cout << 5 << endl;
    if (a <= 7 && b >= 7) cout << 7 << endl;
    if (a <= 11 && b >= 11) cout << 11 << endl;
    for (int d1 = 1; d1 <= 9; d1 += 2) {
        for (int d2 = 0; d2 <= 9; d2++) {
            int num = d1 * 100 + d2 * 10 + d1;
            if (num >= a && num <= b && isPrime(num)) cout << num << endl;
        }
    }
    //偶数位的回文数被11除
    for (int d1 = 1; d1 <= 9; d1 += 2) {
        for (int d2 = 0; d2 <= 9; d2++) {
            for (int d3 = 0; d3 <= 9; d3++) {
                int num = d1 * 10000 + d2 * 1000 + d3 * 100 + d2 * 10 + d1;
                if (num >= a && num <= b && isPrime(num)) cout << num << endl;
            }
        }
    }
    for (int d1 = 1; d1 <= 9; d1 += 2) {
        for (int d2 = 0; d2 <= 9; d2++) {
            for (int d3 = 0; d3 <= 9; d3++) {
                for (int d4 = 0; d4 <= 9; d4++) {
                    int num = d1 * 1000000 + d2 * 100000 + d3 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
                    if (num >= a && num <= b && isPrime(num)) cout << num << endl;
                }
            }
        }
    }

    return 0;  
}