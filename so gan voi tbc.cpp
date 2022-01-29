#include <iostream>
#include <math.h>
void NhapMang(int a[], int &n)
{
	cout <<"Nhap vao kich thuoc mang: ";
	cin >>n;
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
float TBC(int a[], int n)
{
	int dem = 0, tong =0;
	for (int i=0;i<n;i++)
	{
		dem++;
		tong += a[i];
	}
	return tong/dem;
}
void GanTBC(int a[], int n)
{
	int Min = abs(TBC(a,n)-a[0]);
	for (int i=0;i<n;i++)
		if (abs(TBC(a,n)-a[i])<Min)
			Min = abs(TBC(a,n)-a[i]);
	for (int i=0; i<n;i++)
		if (abs(TBC(a,n)-a[i])==Min)
			cout <<"A["<<i<<"] = "<<a[i]<<endl;
}
void main()
{
	int a[20], n;
	NhapMang(a,n);
	XuatMang(a,n);
	TBC(a,n);
	cout <<"\nTrung binh cong cac phan tu cua mang la: "<<TBC(a,n)<<endl;
	cout <<"So gan voi trung binh cong nhat la: ";
	GanTBC(a,n);
}
