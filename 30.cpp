#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> // Thu vi?n ch?a hàm isalpha(), isdigit()

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    string letters = "";
    int digit_sum = 0;
    
    // Duy?t qua t?ng ký t? trong xâu
    for (char c : s) {
        if (isalpha(c)) {
            // N?u là ch? cái, thêm vào xâu luu tr? ch? cái
            letters += c;
        } else if (isdigit(c)) {
            // N?u là ch? s?, c?ng giá tr? c?a nó vào t?ng
            digit_sum += (c - '0');
        }
    }
    
    // S?p x?p các ch? cái theo th? t? anphabet
    sort(letters.begin(), letters.end());
    
    // In k?t qu? theo dúng d?nh d?ng yêu c?u
    cout << letters << digit_sum << "\n";
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
