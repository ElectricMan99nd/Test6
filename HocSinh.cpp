#include "HocSinh.h"

HocSinh::HocSinh()
{

}

// ham khoi tao co doi so
HocSinh::HocSinh(string hoTen, int tuoi, string queQuan, string lop) {
    this->hoTen = hoTen;
    this->tuoi = tuoi;
    this->queQuan = queQuan;
    this->lop = lop;
}

// ham nhap vao thong tin
void HocSinh::nhapThongTin() {
     cout << "\tNhap ho ten: "; getline(cin, hoTen);
     cout << "\tNhap tuoi: "; cin >> tuoi;
     fflush(stdin);
     cout << "\tNhap que quan: "; getline(cin, queQuan);
     cout << "\tNhap lop: "; getline(cin, lop);
}

// ham hien thi
void HocSinh::hienThiThongTin() {
    cout << "\tHo ten: " << hoTen << endl;
    cout << "\tTuoi: " << tuoi << endl;
    cout << "\tQue quan: " << queQuan << endl;
    cout << "\tLop: " << lop << endl;
}

// ham lay ra que quan
string HocSinh::getQueQuan() {
    return queQuan;
}

// ham lay ra thong tin ve ngay sinh
int HocSinh::getTuoi() {
    return tuoi;
}
