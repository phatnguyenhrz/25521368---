#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main(){
    SoPhuc a,b;
    cout<< "Nhap so phuc A:"<<endl;
    a.Nhap();

    cout<< "Nhap so phuc B:"<<endl;
    b.Nhap();

    cout<<endl;
    cout<< "So phuc A = ";
    a.Xuat();
    cout<<endl;
    cout<< "So phuc B = ";
    b.Xuat();
    cout<<endl;

    SoPhuc tong = a.Tong(b);
    SoPhuc hieu = a.Hieu(b);
    SoPhuc tich = a.Tich(b);
    SoPhuc thuong = a.Thuong(b);

    cout<<endl<< "Tong cua hai so phuc = ";
    tong.Xuat();
    cout<<endl<< "Hieu cua hai so phuc = ";
    hieu.Xuat();
    cout<<endl<< "Tich cua hai so phuc = ";
    tich.Xuat();
    cout<<endl<< "Thuong cua hai so phuc = ";
    thuong.Xuat();

    return 0;
}
