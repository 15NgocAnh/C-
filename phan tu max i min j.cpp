/* Viet chuong trinh nhap MT 2 chieu N*M, xuat ra man hinh
	cac phan tu A[i][j] sao cho a[i][j] la pt co gia tri
	lon nhat dong i va nho nhat cot j */
#include <iostream>
#include <stdio.h>
#define MaxD 50
#define MaxC 50
void NhapMT(int a[MaxD][MaxC], int n, int m)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cout <<"A["<<i<<"]["<<j<<"] = ";
			cin >>a[i][j];
		}
	}
}
void XuatMT(int a[MaxD][MaxC], int n, int m)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
			cout <<"  "<<a[i][j];
		cout <<endl;
	}
}
int MaxDong(int a[][MaxC], int m, int &i)
{
	int Max = a[i][0];
	for (int j=0;j<m;j++)
		if (Max < a[i][j])
			Max = a[i][j];
	return Max;
} 
int MinCot(int a[][MaxC], int n, int &j)
{
	int Min = a[0][j];
	for (int i=0;i<n;i++)
		if (Min > a[i][j])
			Min = a[i][j];
	return Min;
} 
void main()
{
	int a[MaxD][MaxC], n, m, i, j;
	cout <<"Nhap so dong cua ma tran: ";
	cin >>n;
	cout <<"Nhap so cot cua ma tran: ";
	cin >>m;
	NhapMT(a,n,m);
	cout <<"Ma tran vua nhap la: "<<endl;
	XuatMT(a,n,m);
	cout <<"Cac phan tu co Max dong va Min cot la: ";
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			if ((a[i][j]==MaxDong(a,m,i))&&(a[i][j]==MinCot(a,n,j)))
				cout <<"A["<<i<<"]["<<j<<"] = "<<a[i][j];
	cout <<endl;
}
