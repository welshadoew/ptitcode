#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
   
    if (!(cin >> n)) return 0;

  
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    int m;
    cin >> m;
    vector<vector<int>> b(m, vector<int>(m));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
   
            long long result = (long long)a[i][j] * b[i % m][j % m];
            cout << result << " ";
        }
        cout << "\n";
    }

    return 0;
}
