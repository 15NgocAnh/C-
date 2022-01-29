#include <iostream>
using namespace std;

void NhapMang(int *a, int n)
{
	cout <<"Nhap vao gia tri: "<<endl;
	for (int i=0;i<n;i++)
	{
		cout <<"A["<<i<<"] = ";
		cin >>*(a+i);
	}
}
void XuatMang(int *a, int n)
{
	for (int i=0;i<n;i++)
		cout <<"  "<<*(a+i);
}
void HoanVi(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
void SapTang(int *a, int n)
{
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (*(a+i)>*(a+j))
				HoanVi((a+i),(a+j));
}
void SapGiam(int *a, int n, int dem)
{
	for (int i=dem;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (*(a+i)<*(a+j))
				HoanVi((a+i),(a+j));
}
void SapXep(int *a, int n)
{
	int dem = 0;
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (*(a+i)%2==0)
				HoanVi((a+i),(a+j));
	for (int i=0;i<n;i++)
		if (*(a+i)%2!=0)
			dem++;
	SapTang(a,dem);
	SapGiam(a,n,dem);
}
int main()
{
	int *a,n;
	cout <<"Nhap kich thuoc mang: ";
	cin >>n;
	a = new int[n];
	NhapMang(a,n);
	cout <<"Mang sau khi nhap la: "<<endl;
	XuatMang(a,n);
	SapXep(a,n);
	cout <<"\nMang sau khi sap xep la: "<<endl;
	XuatMang(a,n);
	cout <<endl;
	delete a;
	return 0;
}
