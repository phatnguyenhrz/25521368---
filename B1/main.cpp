#include <iostream>
#include "NgayThangNam.h"
using namespace std;

int main(){
    NgayThangNam ntn;

    cout<< "Nhap Ngay, Thang, Nam : \n";
    ntn.Nhap();

    cout<<endl;
    cout<< "Ngay, Thang, Nam ban da nhap la :\n";
    ntn.Xuat();

    ntn.NgayThangNamTiepTheo();
    cout<<endl;
    cout<< "Ngay, Thang, Nam tiep theo la :\n";
    ntn.Xuat();
    return 0;
}
