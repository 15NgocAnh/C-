#include <iostream>
#include <stdio.h>
#include <iomanip>
typedef struct MAYTINH
{
	char MaSo[20];
	char TenMay[50];
	char NhaCungCap[100];
	float Gia;
	int Nam;
};
void NhapMT(MAYTINH &mt)
{
	cout <<" - Ma so may tinh: ";
	gets(mt.MaSo);
	cout <<" - Ten may: ";
	gets(mt.TenMay);
	cout <<" - Nha cung cap: ";
	gets(mt.NhaCungCap);
	cout <<" - Gia thanh: ";
	cin >>mt.Gia;
	cout <<" - Nam san xuat: ";
	cin >>mt.Nam;
}
void XuatMT(MAYTINH mt)
{
	cout <<" - Ma so: "<<mt.MaSo;
	cout <<"\n - Ten may: "<<mt.TenMay;
	cout <<"\n - Nha cung cap: "<<mt.NhaCungCap;
	cout <<"\n - Gia thanh: "<<mt.Gia;
	cout <<"\n - Nam SX: "<<mt.Nam;
}
void NhapDSMT(MAYTINH ds[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<"\nNhap thong tin may tinh thu "<<i+1<<endl;
		NhapMT(ds[i]);
	}
}
void XuatDSMT(MAYTINH ds[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<"\nThong tin may tinh thu "<<i+1<<endl;
		XuatMT(ds[i]);
	}
}
void Xuat400(MAYTINH ds[], int &n)
{
	cout <<"\nDanh sach may tinh co gia >400$ la: "<<endl;
	for (int i=0;i<n;i++)
	{
		if (ds[i].Gia>=400)
		{
			cout <<"\nThong tin chi tiet"<<i+1<<endl;
			XuatMT(ds[i]);
		}
	}
}
void ThanhLy(MAYTINH ds[], int &n)
{
	cout <<"\nDanh sach nhung may tinh den han thanh ly la: "<<endl;
	for (int i=0;i<n;i++)
	{
		if (ds[i].Nam<2008)
		{
			cout <<"\nThong tin chi tiet"<<i+1<<endl;
			XuatMT(ds[i]);
		}
	}
}
float TongTien(MAYTINH ds[], int n)
{
	float tong = 0;
	for (int i=0;i<n;i++)
	{
		tong += ds[i].Gia;
	}
	return tong;
}
float TienThanhLy(MAYTINH ds[], int n)
{
	int tong = 0;
	for (int i=0;i<n;i++)
	{
		if (ds[i].Nam<2008)
		{
			tong += ds[i].Gia;
		}
	}
	return tong*30/100;
}
void main()
{
	MAYTINH ds[100];
	int n;
	cout <<"Nhap so luong may: ";
	cin >>n;
	NhapDSMT(ds,n);
	cout <<"\nThong tin may tinh sau khi nhap la: "<<endl;
	XuatDSMT(ds,n);
	cout <<endl;
	Xuat400(ds,n);
	cout <<endl;
	ThanhLy(ds,n);
	cout <<"\nTong so tien mua cac may tinh la: "<<TongTien(ds,n);
	cout <<"\nTong so chi phi thanh ly may tinh la: "<<TienThanhLy(ds,n);
	cout <<endl;
}
