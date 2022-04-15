#ifndef QUANLYHOCSINH_H
#define QUANLYHOCSINH_H

#include "HocSinh.h"
#include <list>

class QuanLyHocSinh
{
    // thuoc tinh
         list<HocSinh> dshs;
         HocSinh hs;

        // phuong thuc
        // ham khoi tao
public:
         QuanLyHocSinh();

        // ham them hoc sinh
         void themHS(HocSinh hs);
        // ham nhap danh sach
         void nhapDanhSachHS();

        // ham hien thi
         void hienThiDanhSach();

        // ham tim kiem thong tin
         void timKiemThongTin(int tuoi, string que);
         void hocSinh20Tuoi(int tuoi);
};

#endif // QUANLYHOCSINH_H
