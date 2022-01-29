#include <iostream>
void NhapMang(int a[], int &n)
{
	cout <<"Nhap kich thuoc mang: ";
	cin >>n;
	for (int i=0;i<n;i++)
	{
		cout <<"a["<<i<<"] = ";
		cin >>a[i];
	}
}
void XuatMang(int a[], int n)
{
	for (int i=0;i<n;i++)
		cout <<"  "<<a[i];
}
void Huy(int a[], int &n, int p)
{
	for(int i=p;i<n;i++)
		a[i] = a[i+1];
	n--;
}
void XoaTrung(int a[], int &n)
{
	for (int i=0;i<n;i++)
		for (int j=i+1;j<n;j++)
			if(a[i]==a[j]) Huy(a,n,j);
}
void main()
{
	int a[20], n, p;
	NhapMang(a,n);
	XuatMang(a,n);
	XoaTrung(a,n);
	cout <<endl;
	XuatMang(a,n);
}
