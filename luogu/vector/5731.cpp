#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int  main(){
     int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    //x是行数，y是列
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0,-1,  0};

    int x = 0, y = 0; 
    int d = 0;        
    for (int i = 1; i <= n * n; i++) {
        matrix[x][y] = i; //

        int nx = x + dx[d];
        int ny = y + dy[d];
        if (nx < 0 || nx >= n || ny < 0 || ny >= n || matrix[nx][ny] != 0) {
            d = (d + 1) % 4;
            nx = x + dx[d];
            ny = y + dy[d];
        }
        x = nx;
        y = ny;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<setw(3)<<matrix[i][j];
        }
        cout<<endl;
    }

    return 0;
}