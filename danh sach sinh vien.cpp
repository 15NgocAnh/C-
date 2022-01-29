#include <iostream>
#include <stdio.h>
typedef struct SINHVIEN
{
	char MaSo[20];
	char HoTen[50];
	char DiaChi[100];
	float Toan, Ly, Hoa;
};
float DiemTB(SINHVIEN sv)
{
	return (sv.Toan + sv.Ly + sv.Hoa)/3;
}
void NhapSV(SINHVIEN &sv)
{
	cout <<" - Ma so sinh vien: ";
	cin >>sv.MaSo;
	fflush(stdin);
	cout <<" - Ho va ten: ";
	gets(sv.HoTen);
	cout <<" - Dia chi: ";
	gets(sv.DiaChi);
	cout <<" - Diem toan: ";
	cin >>sv.Toan;
	cout <<" - Diem ly: ";
	cin >>sv.Ly;
	cout <<" - Diem hoa: ";
	cin >>sv.Hoa;
}
void XuatSV(SINHVIEN sv)
{
	cout <<" - MSSV: "<<sv.MaSo;
	cout <<"\n - Ho ten: "<<sv.HoTen;
	cout <<"\n - Dia chi: "<<sv.DiaChi;
	cout <<"\n - Diem toan: "<<sv.Toan;
	cout <<"\n - Diem ly: "<<sv.Ly;
	cout <<"\n - Diem hoa: "<<sv.Hoa;
	cout <<"\n - Diem trung binh mon: "<<DiemTB(sv);
}
void NhapDSSV(SINHVIEN ds[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<"\nNhap thong tin sinh vien thu "<<i+1<<endl;
		NhapSV(ds[i]);
	}
}
void XuatDSSV(SINHVIEN ds[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<"\nThong tin sinh vien thu "<<i+1<<endl;
		XuatSV(ds[i]);
	}
}
void main()
{
	SINHVIEN ds[100];
	int n;
	cout <<"Nhap so luong sinh vien: ";
	cin >>n;
	NhapDSSV(ds,n);
	cout <<"\nThong tin sau khi nhap la:"<<endl;
	XuatDSSV(ds,n);
	cout <<endl;
}
