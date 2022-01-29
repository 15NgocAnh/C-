/* Tinh cuoc van chuyen */
#include <iostream>
void main()
{
	int soluong, dongia;
	float giamgia, cuocvanchuyen, sotienphaitra;
	cout <<"Nhap so luong mat hang: ";
	cin >>soluong;
	cout <<"Nhap don gia mat hang: ";
	cin >>dongia;
	giamgia = soluong*dongia*12/100;
	cuocvanchuyen = soluong*dongia*5/100;
	sotienphaitra = soluong*dongia - giamgia + cuocvanchuyen;
	cout <<"So luong la: "<<soluong<< endl;
	cout <<"Don gia la: "<<dongia<< endl;
	cout <<"Giam gia la: "<<giamgia<< endl;
	cout <<"Cuoc van chuyen la: "<<cuocvanchuyen<< endl;
	cout <<"So tien phai tra la: "<< sotienphaitra<< endl;
}
