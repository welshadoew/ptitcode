#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    

    bool seen[10] = {false};
    
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        

        for (char c : s) {
            seen[c - '0'] = true;
        }
    }
    

    for (int i = 0; i < 10; ++i) {
        if (seen[i]) {
            cout << i << " ";
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
