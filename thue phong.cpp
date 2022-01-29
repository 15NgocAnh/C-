#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#define Don_gia_A   140000
#define Don_gia_B   160000
#define Don_gia_C   180000
#define Muc_giam    6
#define Ty_le_giam  0.9
typedef struct 
{
	char Hoten[50];
	int Songaythue;
	char Loaiphong;
}THUEPHONG;
void NhapKH(THUEPHONG &kh)
{
	fflush(stdin);
	cout <<" - Ho va ten khach hang: ";
	gets(kh.Hoten);
	cout <<" - So ngay thue phong: ";
	cin >>kh.Songaythue;
	cout <<"Loai phong thue\n";
	cout <<"\tLoai 1: 140000, Loai 2: 160000, Loai 3: 180000";
	cout <<"\n - Chon loai phong muon thue: ";
	cin >>kh.Loaiphong;
}
void NhapDSKH(THUEPHONG *ds, int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<"Nhap thong tin khach hang thu "<<i+1<<endl;
		NhapKH(ds[i]);
	}
}
double TienThue(THUEPHONG kh)
{
	double tien;
	switch (kh.Loaiphong)
	{
		case 1 :
			if (kh.Songaythue<Muc_giam)
				tien = kh.Songaythue*Don_gia_A;
			else 
				tien = kh.Songaythue*Don_gia_A*Ty_le_giam;
			break;
		case 2 :
			if (kh.Songaythue<Muc_giam)
				tien = kh.Songaythue*Don_gia_B;
			else 
				tien = kh.Songaythue*Don_gia_B*Ty_le_giam;
			break;
		case 3 :
			if (kh.Songaythue<Muc_giam)
				tien = kh.Songaythue*Don_gia_C;
			else 
				tien = kh.Songaythue*Don_gia_C*Ty_le_giam;
			break;
	}
	return tien;
}
void XuatDSKH(THUEPHONG *ds, int n)
{
	cout <<"\n+-----+--------------------------------------+-------------------+";
	cout <<"\n| STT |              HO VA TEN               |  SO TIEN PHAI TRA |";
	cout <<"\n+-----+--------------------------------------+-------------------+";
	for (int i=0;i<n;i++)
	{
		cout <<"\n|"<<setw(3)<<i+1<<"  | ";
		cout <<setw(28)<<ds[i].Hoten<<"         |"<<setw(10)<<TienThue(ds[i])<<"  |";
		cout <<"\n+-----+--------------------------------------+-------------------+";
	}
}
void Xuatfile(THUEPHONG *ds, int n, char file[100])
{
	fstream f;
	f.open(file, ios::out);
	f<<"\n+-----+--------------------------------------+-------------------+";
 	f<<"\n| STT |              HO VA TEN               |  SO TIEN PHAI TRA |";
 	f<<"\n+-----+--------------------------------------+-------------------+";
	for (int i=0;i<n;i++)
	{
		f<<"\n|"<<setw(3)<<i+1<<"  | ";
		f<<setw(28)<<ds[i].Hoten<<"         |"<<setw(10)<<TienThue(ds[i])<<"  |";
		f<<"\n+-----+--------------------------------------+-------------------+";
	}
	f.close();
}
void main()
{
	THUEPHONG *ds;
	int n;
	cout <<"Nhap so luong khach thue phong: ";
	cin >>n;
	ds = new THUEPHONG[n];
	NhapDSKH(ds,n);
	cout <<"\nDanh sach khach hang thue phong la: \n";
	XuatDSKH(ds,n);
	Xuatfile(ds,n,"Thuephong.txt");
	delete ds;
}
