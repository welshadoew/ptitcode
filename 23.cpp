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


    void rutGon() {
        long long ucln = timUCLN(tu, mau);
        tu /= ucln;
        mau /= ucln;
    }


    friend istream& operator>>(istream& in, PhanSo& p) {
        in >> p.tu >> p.mau;
        return in;
    }

  
    friend ostream& operator<<(ostream& out, const PhanSo& p) {
        out << p.tu << "/" << p.mau;
        return out;
    }

  
    PhanSo operator+(PhanSo q) {
    
        this->rutGon();
        q.rutGon();

        PhanSo tong;
   
        tong.tu = this->tu * q.mau + q.tu * this->mau;
        tong.mau = this->mau * q.mau;
        
     
        tong.rutGon();
        return tong;
    }
};

int main() {
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    PhanSo p(1, 1), q(1, 1);
    
    
    cin >> p >> q;
    
 
    PhanSo tong = p + q;
    cout << tong << "\n";

    return 0;
}
