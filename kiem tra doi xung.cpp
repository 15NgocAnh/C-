#include <iostream>
#include <stdio.h>
void NhapMT(int a[][20], int n, int m)
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
void XuatMT(int a[][20], int n, int m)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
			cout <<"  "<<a[i][j];
		cout <<endl;
	}
}
void Timmax(int a[][20], int n, int m)
{
	int max = a[0][0];
	int vtdong = 0, vtcot = 0;//vi tri max
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
			if (a[i][j]>max) 
			{
		 		max = a[i][j];
		 		vtdong = i;
		 		vtcot = j;
			}
	}
	cout <<"Phan tu lon nhat la: A["<<vtdong<<"]["<<vtcot<<"] = "<<max;
}
int Kiemtradoixung(int a[][20], int n, int m)
{
	for (int i=1;i<n-1;i++)
		for (int j=0;j<n-1;j++)
			if (a[i][j]!=a[j][i])
				return 0;
	 	return 1;
}
void main()
{
	int a[20][20], n, m;
	cout <<"Nhap vao so dong: ";
	cin >>n;
	cout <<"Nhap vao so cot: ";
	cin >>m;
	NhapMT(a,n,m);
	cout <<"Ma tran vua nhap la: "<<endl;
	XuatMT(a,n,m);
	Timmax(a,n,m);
	cout <<endl;
	if (Kiemtradoixung(a,n,m)==0)
		cout <<"Ma tran khong doi xung.";
	else 
		cout <<"Ma tran doi xung.";
	cout <<endl;
}
