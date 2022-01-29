#include <iostream>
#include <stdio.h>
#include <iomanip>
typedef struct HOCSINH
{
	char HoTen[50];
	float DTB;
	int ViThu;
};
void NhapHS(HOCSINH &hs)
{
	cout <<" - Ho va ten: ";
	gets(hs.HoTen);
	cout <<" - Diem trung binh: ";
	cin >>hs.DTB;
}
void NhapDSHS(HOCSINH ds[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<"\nNhap thong tin hoc sinh thu "<<i+1<<endl;
		NhapHS(ds[i]);
	}
}
void HoanVi(HOCSINH &h1, HOCSINH &h2)
{
	HOCSINH t = h1;
	h1 = h2;
	h2 = t;
}
void XepHang(HOCSINH ds[], int n)
{
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (ds[i].DTB < ds[j].DTB)
				HoanVi(ds[i],ds[j]);
	ds[0].ViThu = 1;
	for (int k=1;k<n;k++)
		if (ds[k].DTB == ds[k-1].DTB)
			ds[k].ViThu = ds[k-1].ViThu;
		else
			ds[k].ViThu = k+1;
}
void XuatDSHS(HOCSINH dshs[], int n)
{
	cout <<"\n+-----+--------------------------------------+-------+-----------+";
	cout <<"\n| STT |              HO VA TEN               |  DTB  |  Xep Hang |";
	cout <<"\n+-----+--------------------------------------+-------+-----------+";
	for (int i=0;i<n;i++)
	{
		cout <<"\n|"<<setw(3)<<i+1<<"  | ";
		cout <<setw(28)<<dshs[i].HoTen<<"         |"<<setw(4)<<dshs[i].DTB<<"   |     "
		<<dshs[i].ViThu<<"     |";
		cout <<"\n+-----+--------------------------------------+-------+-----------+";
	}
	cout <<endl;
}
void main()
{
	HOCSINH ds[100];
	int n;
	cout <<"Nhap so luong hoc sinh: ";
	cin >>n;
	NhapDSHS(ds,n);
	XepHang(ds,n);
	cout <<"Bang xep hang: "<<endl;
	XuatDSHS(ds,n);
}
