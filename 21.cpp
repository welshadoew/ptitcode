#include <iostream>
#include <string>

using namespace std;


struct NhanVien {
    string maNV = "00001"; 
    string hoTen;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string maSoThue;
    string ngayKyHD;
};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    NhanVien nv;


    getline(cin, nv.hoTen);
    getline(cin, nv.gioiTinh);
    getline(cin, nv.ngaySinh);
    getline(cin, nv.diaChi);
    getline(cin, nv.maSoThue);
    getline(cin, nv.ngayKyHD);


    cout << nv.maNV << " " 
         << nv.hoTen << " " 
         << nv.gioiTinh << " " 
         << nv.ngaySinh << " " 
         << nv.diaChi << " " 
         << nv.maSoThue << " " 
         << nv.ngayKyHD << "\n";

    return 0;
}
