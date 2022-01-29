#include <iostream>
void NhapMang(int a[], int &n)
{
	cout <<"Nhap vao gia tri phan tu: "<<endl;
	for (int i=0;i<n;i++)
	{
		cout <<"A["<<i<<"] = ";
		cin >>a[i];
	}
}
void XuatMang(int a[], int n)
{
	for (int i=0;i<n;i++)
		cout <<"  "<<a[i];
}
int Tim(int a[], int n, int x)
{
	int dem = 0;
	for (int i=0;i<n;i++)
		if (a[i]==x) 
			dem++;
	return dem;
}
void Chen(int a[], int &n, int x)
{
	int i,j,p;
	//tim vi tri chen x
	for (i=0;i<n;i++)
		if (a[i]>=x) p = i - 1;
	for (j=n-1;j>=p;j--)
		a[j+1]=a[j];
	a[p]=x;
	n++;
}
void main()
{
	int dem, i, a[100], n, x;
	cout <<"Nhap vao so phan tu cua mang: ";
	cin >>n;
	NhapMang(a,n);
	cout <<"Mang vua nhap la: "<<endl;
	XuatMang(a,n);
	cout <<"\nGia tri phan tu x muon tim la: ";
	cin >>x;
	dem = Tim(a,n,x);
	if (dem!=0)
		cout <<x<<" xuat hien "<<dem<<" lan trong mang."<<endl;
	else 
	{
		cout <<"Khong co phan tu "<<x<<" trong mang."<<endl;
		cout <<"Chen "<<x<<" vao mang: "<<endl;
		Chen(a,n,x);
		XuatMang(a,n);
		cout <<endl;
	}
}
