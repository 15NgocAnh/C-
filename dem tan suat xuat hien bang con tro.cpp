#include <iostream>
void NhapMang(int *a, int n)
{
	cout <<"Nhap gia tri: "<<endl;
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
int Tim_tan_suat_xuat_hien_Max(int *a, int n)
{
	int max = 1;
	for (int i=0; i<n; i++)
	{
		int dem = 1;
		for (int j=i+1;j<n;j++)
		{
			if (*(a+i)==*(a+j))
				dem++;
		}
		if (dem>max)
			max = dem;
	}
	return max;
}
int Dem_tan_suat_xuat_hien(int *a, int n, int index)
{
	int dem = 1;
	for (int i=index+1;i<n;i++)
		if (*(a+i)==*(a+index))
			dem++;
	return dem;
}
int Liet_ke(int *a, int n)
{
	int tansuatmax = Tim_tan_suat_xuat_hien_Max(a,n);
	if (tansuatmax>1)
	{
		for (int i=0;i<n;i++)
		{
			int tanxuat = Dem_tan_suat_xuat_hien(a,n,i);
			if (tanxuat==tansuatmax)
				cout <<"Phan tu xuat hien nhieu nhat la: "<<*(a+i)<<endl;
		}
		cout <<"So lan xuat hien nhieu nhat la: "<<tansuatmax<<endl;
	}
	else 
		cout <<"So lan moi phan tu xuat hien la 1"<<endl;
}
void main()
{
	int *a, n;
	cout <<"Nhap vao kich thuoc mang: ";
	cin >>n;
	a = new int[n];
	NhapMang(a,n);
	cout <<"Mang sau khi nhap la: "<<endl;
	XuatMang(a,n);
	cout <<endl;
	Liet_ke(a,n);
	delete a;
}
