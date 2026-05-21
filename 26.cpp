#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int left = 0;
    int right = n - 1;
    int operations = 0;


    while (left <= right) {
    
        if (a[left] == a[right]) {
            left++;
            right--;
        } 
       
        else if (a[left] < a[right]) {
            a[left + 1] += a[left];
            left++;
            operations++;
        } 
      
        else {
            a[right - 1] += a[right];
            right--;
            operations++;
        }
    }


    cout << operations << "\n";
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
