#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void solve() {
    string s;
    cin >> s;
    

    unordered_map<char, long long> count_char;
    for (char c : s) {
        count_char[c]++;
    }
    
    long long total_substrings = 0;
    

    for (auto const& [key, count] : count_char) {
        total_substrings += (count * (count + 1)) / 2;
    }
    
    cout << total_substrings << "\n";
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
