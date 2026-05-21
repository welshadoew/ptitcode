#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    
    // Bu?c 1: Tìm v? trí i d?u tiên t? ph?i sang trái sao cho s[i] > s[i+1]
    int i = n - 2;
    while (i >= 0 && s[i] <= s[i + 1]) {
        i--;
    }
    
    // N?u không tìm th?y, t?c là các ch? s? x?p theo th? t? không gi?m (vd: 12345)
    if (i < 0) {
        cout << "-1\n";
        return;
    }
    
    // Bu?c 2: Tìm ch? s? l?n nh?t ? n?a bên ph?i (t? i+1 d?n n-1) mà nh? hon s[i]
    int j_max = -1;
    for (int j = i + 1; j < n; j++) {
        if (s[j] < s[i]) {
            // C?p nh?t n?u chua có, ho?c n?u tìm th?y s? l?n hon s? dã luu.
            // Phép ">" (không có d?u =) d?m b?o ta s? luôn l?y ph?n t? ngoài cùng 
            // bên trái n?u có nhi?u ch? s? b?ng nhau th?a mãn.
            if (j_max == -1 || s[j] > s[j_max]) {
                j_max = j;
            }
        }
    }
    
    // Ð?i ch?
    swap(s[i], s[j_max]);
    
    // Bu?c 3: Ki?m tra tính h?p l? (không b?t d?u b?ng ch? s? '0')
    if (s[0] == '0') {
        cout << "-1\n";
    } else {
        cout << s << "\n";
    }
}

int main() {
    // T?i uu hóa I/O giúp chuong trình ch?y nhanh hon
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
