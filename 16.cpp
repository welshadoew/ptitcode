#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, s;
    if (!(cin >> m >> s)) return 0;

  
    if (s == 0) {
        if (m == 1) {
            cout << "0 0\n";
        } else {
            cout << "-1 -1\n";
        }
        return 0;
    }

    if (s > 9 * m) {
        cout << "-1 -1\n";
        return 0;
    }

    string max_str = "";
    int sum_for_max = s;
    for (int i = 0; i < m; ++i) {
        
        int digit = min(9, sum_for_max);
        max_str += to_string(digit);
        sum_for_max -= digit;
    }

 
    string min_str = "";
    vector<int> min_digits(m, 0);
    int sum_for_min = s - 1; 
    

    for (int i = m - 1; i > 0; --i) {
        int digit = min(9, sum_for_min);
        min_digits[i] = digit;
        sum_for_min -= digit;
    }

    min_digits[0] = sum_for_min + 1;

    for (int i = 0; i < m; ++i) {
        min_str += to_string(min_digits[i]);
    }

 
    cout << min_str << " " << max_str << "\n";

    return 0;
}
