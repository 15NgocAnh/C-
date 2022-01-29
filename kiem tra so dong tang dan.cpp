#include <iostream.h>
#include <stdio.h>
void NhapMang(int a[][20], int &n, int &m)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cout <<" A["<<i<<"]["<<j<<"] = ";
			cin >>a[i][j];
		}
	}
}
void XuatMang(int a[][20], int n, int m)
{
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
			cout <<"  "<<a[i][j];
			cout <<endl;
}
int Tongsoduong(int a[][20], int n, int m)
{
	int tong = 0;
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
			if (a[i][j]>0) tong+=a[i][j];
	return tong;
}
int Kiemtratang(int a[][20], int n, int m)
{
	int sodong = 0;
	for (int i=0;i<n;i++)
	{
		int dem=0;
		for (int j=0;j<m-1;j++)
			if (a[i][j]<a[i][j+1]) dem++;
		if (dem==m-1)
			sodong++;
	}
	return sodong;
}
void main()
{
	int a[20][20], n, m;
	cout <<"Nhap vao so dong: ";
	cin >>n;
	cout <<"Nhap vao so cot: ";
	cin >>m;
	NhapMang(a,n,m);
	cout <<"Ma tran sau khi nhap la: "<<endl;
	XuatMang(a,n,m);
	cout <<"Tong cac so duong trong mang la: "<<Tongsoduong(a,n,m)<<endl;
	cout <<"So dong sap xep theo thu tu tang dan tu trai sang phai la: "<<Kiemtratang(a,n,m)<<endl;
	return 0;
}
