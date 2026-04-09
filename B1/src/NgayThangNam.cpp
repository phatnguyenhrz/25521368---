#include <iostream>
#include "NgayThangNam.h"
using namespace std;

// Ham kiem tra nam nhuan
bool NamNhuan(int n){
    // Nam chia het cho 4 la nam nhuan (ban don gian)
    if(n%4==0) return true;
    return false;
}

// Ham tra ve so ngay trong mot thang cua mot nam
int SoNgayTrongThang(int thang, int nam) {

    // Cac thang co 31 ngay
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 ||
        thang == 8 || thang == 10 || thang == 12)
        return 31;

    // Cac thang co 30 ngay
    if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
        return 30;

    // Thang 2 phu thuoc nam nhuan
    if (thang == 2) {
        if (NamNhuan(nam))
            return 29; // Nam nhuan
        else
            return 28; // Nam khong nhuan
    }
}

void NgayThangNam::Nhap(){
     cout<< "Nhap nam: ";
     cin>> iNam;
     //Nhap thang va kiem tra hop le
     do{
        cout<< "Nhap thang: ";
        cin>>iThang;
        if(iThang < 1 || iThang > 12){
            cout<< "Thang ban nhap khong hop le, vui long nhap lai !\n";
        }
     }while(iThang < 1 || iThang > 12);
    //Nhap ngay va kiem tra hop le
     do{
        cout<< "Nhap ngay: ";
        cin>> iNgay;
       // Kiem tra ngay co vuot so ngay trong thang khong
        if(iNgay < 1 || iNgay > SoNgayTrongThang(iThang,iNam)){
            cout<< "Ngay ban nhap khong hop le, vui long nhap lai !\n";
        }
     }while(iNgay < 1 || iNgay > SoNgayTrongThang(iThang,iNam));
}

void NgayThangNam::Xuat(){
     cout<< iNgay << "/" << iThang << "/" << iNam;
}

void NgayThangNam::NgayThangNamTiepTheo(){
    //Tang them 1 ngay
     iNgay++;
    //Neu ngay vuot so ngay trong thang
     if(iNgay > SoNgayTrongThang(iThang,iNam)){
        iNgay = 1;
        iThang++;
     }
    //Neu thang vuot qua 12
     if(iThang > 12){
        iThang = 1;
        iNam++;
     }
}
