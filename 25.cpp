#include <iostream>
#include <vector>

using namespace std;


void rotateMatrix(int m, int n, vector<vector<int>>& mat) {
    int row = 0, col = 0;
    int prev, curr;

    
    while (row < m && col < n) {

        if (row + 1 == m || col + 1 == n) {
            break;
        }


        prev = mat[row + 1][col];


        for (int i = col; i < n; i++) {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;


        for (int i = row; i < m; i++) {
            curr = mat[i][n - 1];
            mat[i][n - 1] = prev;
            prev = curr;
        }
        n--;


        if (row < m) {
            for (int i = n - 1; i >= col; i--) {
                curr = mat[m - 1][i];
                mat[m - 1][i] = prev;
                prev = curr;
            }
            m--; 
        }

    
        if (col < n) {
            for (int i = m - 1; i >= row; i--) {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
            col++;
        }
    }
}

void solve() {
    int m, n;
    cin >> m >> n;
    

    vector<vector<int>> mat(m, vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
        }
    }
    

    rotateMatrix(m, n, mat);
    
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << mat[i][j] << " ";
        }
    }
    cout << "\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
