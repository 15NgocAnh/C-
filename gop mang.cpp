#include <iostream>
void NhapMang(int a[], int &n, char ch)
{
	cout <<"\nNhap vao kich thuoc mang: ";
	cin >>n;
	for (int i=0; i<n; i++)
	{
		cout <<ch<<"["<<i<<"] = ";
		cin >>a[i];
	}
}
void XuatMang(int a[], int n)
{
	for (int i=0; i<n; i++)
		cout <<"  "<<a[i];
}
void GopMangXenKe(int a[], int b[], int c[], int n)
{
	int j = 0;//chi so cua mang c
	for (int i=0;i<n;i++)
	{
		c[j++] = a[i];
		c[j++] = b[i];
	}
}
void main()
{
	int a[20], b[20], c[40], n;
	NhapMang(a,n,'A');
	XuatMang(a,n);
	NhapMang(b,n,'B');
	XuatMang(b,n);
	GopMangXenKe(a,b,c,n);
	cout <<endl;
	XuatMang(c,2*n);
	cout <<endl;
}
