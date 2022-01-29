#include <iostream>
#include <stdio.h>
typedef struct NHANVIEN
{
	char MaSo[20];
	char HoTen[50];
	char DiaChi[100];
	int CanBo;
};
void NhapNV(NHANVIEN &nv)
{
	cout <<" - Ma so nhan vien: ";
	cin >>nv.MaSo;
	cout <<" - Ho va ten: ";
	gets(nv.HoTen);
	cout <<" - Dia chi: ";
	gets(nv.DiaChi);
	cout <<" - Can bo nhan vien (1: Quan ly; 0: Nhan vien): ";
	cin >>nv.CanBo;
}
void XuatNV(NHANVIEN nv)
{
	cout <<" - MSNV: "<<nv.MaSo;
	cout <<"\n - Ho ten: "<<nv.HoTen;
	cout <<"\n - Dia chi: "<<nv.DiaChi;
	if (nv.CanBo==1)
		cout <<"\n - Day la quan ly.";
	else	
		cout <<"\n - Day la nhan vien.";
}
void NhapDSNV(NHANVIEN ds[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<"\nNhap thong tin nhan vien thu "<<i+1<<endl;
		NhapNV(ds[i]);
	}
}
void XuatDSNV(NHANVIEN ds[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<"\nThong tin nhan vien thu "<<i+1<<endl;
		XuatNV(ds[i]);
	}
}
void Xoa(NHANVIEN ds[], int &n, int p)
{
	for (int i=p;i<n-1;i++)
		ds[i] = ds[i+1];
	n--;
}
void XoaNV(NHANVIEN ds[], int &n)
{
	for (int i=0;i<n;i++)
		if (ds[i].CanBo==0)
			Xoa(ds,n,i);
}
void main()
{
	NHANVIEN ds[100];
	int n;
	cout <<"Nhap vao so luong nhan vien: ";
	cin >>n;
	NhapDSNV(ds,n);
	cout <<"\nThong tin danh sach nhan vien sau khi nhap la: "<<endl;
	XuatDSNV(ds,n);
	cout <<"\nDanh sach quan ly la: "<<endl;
	XoaNV(ds,n);
	XuatDSNV(ds,n);
	cout <<endl;
}
