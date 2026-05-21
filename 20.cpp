#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;


struct ThiSinh {
    string hoTen;
    string ngaySinh;
    float diem1, diem2, diem3;
    float tongDiem;
};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ThiSinh ts;


    getline(cin, ts.hoTen);
    

    cin >> ts.ngaySinh;
    cin >> ts.diem1 >> ts.diem2 >> ts.diem3;

    
    ts.tongDiem = ts.diem1 + ts.diem2 + ts.diem3;

  
    cout << ts.hoTen << " " << ts.ngaySinh << " ";
    cout << fixed << setprecision(1) << ts.tongDiem << "\n";

    return 0;
}
