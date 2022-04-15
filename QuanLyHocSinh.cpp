#include "QuanLyHocSinh.h"

QuanLyHocSinh::QuanLyHocSinh()
{

}

void QuanLyHocSinh::themHS(HocSinh hs) {
   dshs.push_back(hs);
}

// ham nhap danh sach
void QuanLyHocSinh::nhapDanhSachHS() {
    int soLuongHS;
    cout << "Nhap vao so luong hoc sinh: "; cin >> soLuongHS;
    fflush(stdin);
    cout << "*********Nhap thong tin cho hoc sinh trong danh sach*********" << endl;
    for (int i = 0; i < soLuongHS; i++) {
       cout << "Hoc sinh thu " << (i +1)  << ":" << endl;
        hs.nhapThongTin();
        themHS(hs);
    }
}

// ham hien thi
void QuanLyHocSinh::hienThiDanhSach() {
    int i = 0;
   for (HocSinh hs : dshs) {
       i++;
       cout << "Hoc sinh thu " << i << ":" << endl;
       hs.hienThiThongTin();
   }
}

// ham tim kiem thong tin
void QuanLyHocSinh::timKiemThongTin(int tuoi, string que) {
   int count = 0;
   for (HocSinh hs : dshs) {
       if ((hs.getTuoi()== tuoi) && ( strcmp(que.c_str(), hs.getQueQuan().c_str()) == 0)) {
           count++;
       }
   }
   if(count == 0){
       cout << "Khong co hoc sinh nao 23 tuoi & que Nam Dinh haizzzz" << endl;
   }else
   {
       cout << "Co " << count << " hoc sinh 23 tuoi & que Nam Dinh" << endl;
   }
}


void QuanLyHocSinh::hocSinh20Tuoi(int tuoi) {
   int count = 0;
   for (HocSinh hs : dshs) {
       if (tuoi == hs.getTuoi()) {
           count++;
           cout << "Hoc sinh thu " << count << ":" << endl;
           hs.hienThiThongTin();

       }
   }
   if(count == 0) {
       cout << "Khong co hoc sinh 20 tuoi nao de hien thi hixx!!" << endl;
   }
}



