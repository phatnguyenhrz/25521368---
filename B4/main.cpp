#include <iostream>
#include "GioPhutGiay.h"
using namespace std;

int main(){
    GioPhutGiay n;
    cout<< "Nhap Gio, Phut, Giay:"<<endl;
    n.Nhap();

    cout<< "Gio, Phut, Giay ban da nhap la:"<<endl;
    n.Xuat();

    n.TinhCongThemMotGiay();
    cout<< endl;
    cout<< "Gio, Phut, Giay sau khi cong them mot giay:" <<endl;
    n.Xuat();

    return 0;
}
