#include <iostream>
#include "SoPhuc.h"
using namespace std;

void SoPhuc::Nhap(){
     cout<< "Nhap du lieu phan thuc: ";
     cin>> iThuc;

     cout<< "Nhap du lieu phan ao: ";
     cin>> iAo;
}

void SoPhuc::Xuat(){
     cout<< iThuc;

     // Neu phan ao duong thi in +
     if(iAo>=0)
        cout<< " + " << iAo<< "*i";

     // Neu phan ao am thi in -
     else
        cout<< " - "<< -iAo<< "*i";
}

SoPhuc SoPhuc::Tong(SoPhuc sp){
     SoPhuc ketqua;
     // Cong phan thuc
     ketqua.iThuc = iThuc + sp.iThuc;
     // Cong phan ao
     ketqua.iAo = iAo + sp.iAo;
     return ketqua;
}

// Ham tinh hieu hai so phuc
SoPhuc SoPhuc::Hieu(SoPhuc sp){
     SoPhuc kq;
     // Tru phan thuc
     kq.iThuc=  iThuc - sp.iThuc;
     // Tru phan ao
     kq.iAo= iAo - sp.iAo;
     return kq;
}

// Ham tinh tich hai so phuc
SoPhuc SoPhuc::Tich(SoPhuc sp){
     SoPhuc kq;

     // (a + bi)(c + di) = (ac - bd) + (ad + bc)i
     // Tinh phan thuc
     kq.iThuc = iThuc*sp.iThuc - iAo*sp.iAo;

     // Tinh phan ao
     kq.iAo = iThuc*sp.iAo  + iAo*sp.iThuc;

     return kq;
}

SoPhuc SoPhuc::Thuong(SoPhuc sp){
     SoPhuc kq;

     // (a + bi)/(c + di) =
     // [(ac + bd) + (bc - ad)i] / (c^2 + d^2)

     // Tinh phan thuc
     kq.iThuc = (iThuc*sp.iThuc + iAo*sp.iAo)
                /(sp.iThuc*sp.iThuc + sp.iAo*sp.iAo);

     // Tinh phan ao
     kq.iAo = (iAo*sp.iThuc - iThuc*sp.iAo)
              /(sp.iThuc*sp.iThuc + sp.iAo*sp.iAo);

     return kq;
}
