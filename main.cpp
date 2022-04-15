#include "QuanLyHocSinh.h"

int main(){
    QuanLyHocSinh qlhs;
    qlhs.nhapDanhSachHS();
    cout << "*********Danh sach hoc sinh hien tai********* " << endl;
    qlhs.hienThiDanhSach();
    cout << "*********Danh sach cac hoc sinh 20 tuoi*********" << endl;
    qlhs.hocSinh20Tuoi(20);
    cout << "**********So luong hoc sinh 23 tuoi & que Nam Dinh*********" << endl;
    qlhs.timKiemThongTin(23, "Nam Dinh");

}
