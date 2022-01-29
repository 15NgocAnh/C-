#include <iostream>
void NhapMang(int a[], int &n)
{
	cout <<"Nhap kich thuoc mang: ";
	cin >>n;
	for (int i = 0;i<n;i++)
	{
		cout <<"a["<<i<<"] = ";
		cin >> a[i];
	}
}
void XuatMang(int a[], int n)
{ 
	cout <<"Xuat mang: "<<endl;
	for (int i=0;i<n;i++)
		cout <<"  "<<a[i];
}
void TBC(int a[], int n, float &TBCDuong, float &TBCAm)
{
	int tongduong = 0, demduong = 0;//dem so duong trong mang
	int tongam = 0, demam = 0;
	for (int i=0; i<n; i++)
	{
		if (a[i]>0)
		{
			demduong++;
			tongduong += a[i];
		}
		else
		{	
			demam++;
			tongam += a[i];	
		}
	}
	if (demduong>0)
		TBCDuong = (float)tongduong/demduong;
	else 
		TBCDuong = 0;
	if (demam>0)
		TBCAm = (float)tongam/demam;
	else 
		TBCAm = 0;	
}
void main()
{
	int a[20], n, i = 0;
	NhapMang(a,n);
	XuatMang(a,n);
	float am, duong;
	TBC(a,n,duong,am);
	cout <<"\nDap an la: "<<endl;
	if (duong>0)
		cout <<" - Trung binh cong so duong = "<<duong<<endl;
	else 
		cout <<" - Mang khong co so duong."<<endl;
	if (am<0)
		cout <<" - Trung binh cong so am = "<<am<<endl;
	else
		cout <<" - Mang khong co so am."<<endl;
}
