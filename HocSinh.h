#ifndef HOCSINH_H
#define HOCSINH_H

#include <string.h>
#include <iostream>
using namespace std;

class HocSinh
{
    // thuoc tinh
         string hoTen;
         int tuoi;
         string queQuan;
         string lop;
public:
        // phuong thuc
        // ham khoi tao khong doi so
         HocSinh();

        // ham khoi tao co doi so
         HocSinh(string hoTen, int tuoi, string queQuan, string lop);

        // ham nhap vao thong tin
         void nhapThongTin();

        // ham hien thi
         void hienThiThongTin();

        // ham lay ra que quan
         string getQueQuan();

        // ham lay ra thong tin ve ngay sinh
         int getTuoi();
};

#endif // HOCSINH_H
