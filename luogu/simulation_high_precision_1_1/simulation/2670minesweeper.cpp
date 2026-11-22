#include<iostream>
#include<vector>
using namespace std;


int found(vector<vector<char>>& ar, int x, int y, int a, int b) { 
    int count = 0;
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (int d = 0; d < 8; d++) {
        int nx = x + dx[d]; 
        int ny = y + dy[d];
        if (nx >= 0 && nx < a && ny >= 0 && ny < b) {
            if (ar[nx][ny] == '*')
                count++;
        }
    }
    return count;
}

int main() {
    int a, b;
    cin >> a >> b;
    vector<vector<char>> arr(a, vector<char>(b));
    for (int i = 0; i < a; i++) { 
        for (int j = 0; j < b; j++) { 
            cin >> arr[i][j];
        }
    }
    vector<vector<char>> ar = arr;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (arr[i][j] != '*') {
                int tem = found(arr, i, j, a, b);
                ar[i][j] = tem + '0'; 
            }
            cout << ar[i][j]; 
        }
        cout << endl;
    }
    return 0;
}