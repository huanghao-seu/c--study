#include <iostream>
#include <vector>
using namespace std;

int main() {
    int L, M;
    cin >> L >> M;
    vector<int> trees(L + 1, 1); 
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        for (int j = u; j <= v; ++j) {
            trees[j] = 0; 
        }
    }
    
    int count = 0;
    for (auto tree : trees) { 
        if (tree == 1) {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}