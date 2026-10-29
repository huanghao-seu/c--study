#include <iostream>
using namespace std;

int main() {
    int scores[3][3] = {
        {90, 85, 92}, 
        {78, 88, 80}, 
        {95, 96, 99}  
    };
    
    int rows = sizeof(scores) / sizeof(scores[0]);
    int cols = sizeof(scores[0]) / sizeof(scores[0][0]);
    cout << "--- 学生总分 ---" << endl;
    for (int i = 0; i < rows; i++) {
        int sum = 0; 
        for (int j = 0; j < cols; j++) {
            sum += scores[i][j];
        }
        cout << "学生 " << i + 1 << " 总分: " << sum << endl;//要加1
    }
    cout << "--- 课程平均分 ---" << endl;
    for (int j = 0; j < cols; j++) {
        int sum = 0; // 
        for (int i = 0; i < rows; i++) {
            sum += scores[i][j];
        }
        double avg = (double)sum / rows; 
        cout << "课程 " << j + 1 << " 平均分: " << avg << endl;
    }
    int max_score = scores[0][0]; 
    int max_row = 0;              
    int max_col = 0;              

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scores[i][j] > max_score) {
                max_score = scores[i][j]; 
                max_row = i;              
                max_col = j;              
            }
        }
    }
    cout << "--- 班级最高分统计 ---" << endl;
    cout << "最高分是: " << max_score << endl;
    cout << "由学生 " << max_row + 1 << " 的课程 " << max_col + 1 << " 考出。" << endl;

    return 0;
}
