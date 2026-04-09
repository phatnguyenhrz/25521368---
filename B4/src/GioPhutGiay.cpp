#include <iostream>
#include "GioPhutGiay.h"
using namespace std;



void GioPhutGiay::Nhap(){
     cout<< "Nhap giay: ";
     cin>> iGiay;
     cout<< "Nhap phut: ";
     cin>> iPhut;
     cout<< "Nhap gio: ";
     cin>> iGio;

     //chuan hoa GioPhutGiay
     while(iGiay>=60){
        iGiay -= 60;
        iPhut++;
     }
     while(iPhut>=60){
        iPhut -= 60;
        iGio++;
     }
     while(iGio>=24) iGio -= 24;
}

void GioPhutGiay::Xuat(){
     cout<<iGio<< " Gio " <<iPhut << " Phut "<<iGiay<< " Giay ";
}

void GioPhutGiay::TinhCongThemMotGiay(){
     iGiay++;
      //chuan hoa GioPhutGiay
     while(iGiay>=60){
        iGiay -= 60;
        iPhut++;
     }
     while(iPhut>=60){
        iPhut -= 60;
        iGio++;
     }
     if(iGio>=24) iGio -= 24;
}
