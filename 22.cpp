#include <iostream>

using namespace std;


long long timUCLN(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}


class PhanSo {
private:
    long long tu;
    long long mau;

public:

    PhanSo(long long t = 1, long long m = 1) {
        tu = t;
        mau = m;
    }


    void nhap() {
        cin >> tu >> mau;
    }


    void rutGon() {
        long long ucln = timUCLN(tu, mau);
        tu /= ucln;
        mau /= ucln;
    }


    void xuat() {
        cout << tu << "/" << mau << "\n";
    }
};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    PhanSo p(1, 1);
    p.nhap();
    p.rutGon();
    p.xuat();

    return 0;
}
