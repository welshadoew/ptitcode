#include <iostream>
#include <string>
#include <cctype> // Thu vi?n ch?a hàm isdigit()

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    // Dùng long long d? d?m b?o an toàn không b? tràn s?
    long long sum = 0;
    long long current_num = 0;
    
    for (char c : s) {
        // Ki?m tra xem ký t? hi?n t?i có ph?i là ch? s? không
        if (isdigit(c)) {
            // Xây d?ng con s?
            current_num = current_num * 10 + (c - '0');
        } else {
            // N?u g?p ch? cái, c?ng d?n s? v?a tìm du?c vào t?ng
            sum += current_num;
            // Reset l?i d? tìm s? m?i
            current_num = 0;
        }
    }
    
    // C?ng con s? cu?i cùng (n?u xâu k?t thúc b?ng m?t ch? s?)
    sum += current_num;
    
    cout << sum << "\n";
}

int main() {
    // T?i uu hóa I/O trong C++
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
