#include <iostream>
#include <stdio.h>
#include <math.h>
//Ham nhap mang ngau nhien
void NhapMang(int a[], int n)
{
	//tao ra so random tu [10,50]
	//rand() % (b-a+1)+a
	for (int i=0;i<n*n;i++)
 		a[i] = rand()%(50-40+1) + 10;
}
//Ham xuat mang kieu ma tran
void XuatMang(int a[], int n)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
			cout <<"  "<<a[i*n+j];
			cout <<endl;
	}
}
void SapXep(int a[], int n)
{
	int tam;
	for (int i=0;i<n*n-1;i++)
		for (int j=i+1;j<n*n;j++)
			if (a[i]>a[j])
			{
		 		tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
}
void Chuyen(int a[], int b[][50], int n)
{
	int i=0, j=0, k, l=0, tam;
	while (i<n*n)
	{
		//n = 5, l = 0
		for (j=1;j<n-1;j++)
			b[l][j]=a[i++]; //0,1 0,2 0,3 0,4
		for (k=l+1;k<n-1;k++)
			b[k][n-l-1]=a[i++]; //1,4 2,4 3,4 4,4
		for (j=n-1-2;j>=1;j--)
			b[n-l-1][j]=a[i++]; //4,3 4,2 4,1 4,0
		for (k=n-1-2;k>1;k--)
			b[k][l]=a[i++]; //3,0 2,0 1,0 0,0
		i++;
	}
}
//Ham xuat ma tran vuong a
void XuatMT(int a[][50], int n)
{
	cout <<"Ma tran: "<<endl;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
			cout <<"  "<<a[i][j];
		cout <<endl;
	}
}
void main()
{
	int n, a[400], b[50][50];
	cout <<"Nhap cap cua ma tran vuong: ";
	cin >>n;
	NhapMang(a,n);
	XuatMang(a,n);
	cout <<"Ma tran sau khi sap xep theo chieu tang dan xoan oc la: "<<endl;
	SapXep(a,n);
	Chuyen(a,b,n);
	XuatMT(b,n);
}
