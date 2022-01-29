#include <iostream>
void NhapMang(int a[], int &n)
{
	cout <<"Nhap vao so phan tu cua mang: ";
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
//Ham dem so phan tu am co trong mang
int DemAm(int a[], int n)
{
	int dem = 0;
	for (int i=0,i<n;i++)
		if (a[i]<0) 
			dem++;
			return dem;
		else 
			cout <<"Mang khong co phan tu am.";
}
//Ham tim max, min cua mang
void MaxMin(int a[], int n)
{
	max = a[0], min = a[0];
	for (int i=0;i<n;i++)
	{
		if (a[i]>max) max = a[i];
		if (a[i]<min) min = a[i];
	}
	cout <<"Phan tu Max cua mang la: "<<max<<endl;
	cout <<"Phan tu Min cua mang la: "<<min<<endl;
}
//Ham tim so am lon nhat va duong be nhat
void AmDuong(int a[], int n)
{
	int coSoAm=0, coSoDuong=0;
	int Amlonnhat, Duongbenhat;
	for (int i=0;i<n;i++)
	{
		if (a[i]<0) //Neu a[i] la so am
			if (coSoAm==0) //a[i] la so am dau tien
			{
				coSoAm = 1;
				Amlonnhat = a[i];
			}
			else //Da co so am roi
				if (a[i]>Amlonnhat)
					Amlonnhat = a[i];	
		else //Neu a[i] la so duong
			if (coSoDuong==0) //a[i] la so duong dau tien
			{
				coSoDuong = 1;
				Duongbenhat = a[i];
			}
			else //Da co so duong roi
				if (a[i]<Duongbenhat)
				Duongbenhat = a[i];	
	}
}
//Ham liet ke so nguyen to trong mang
void LietkeSNT(int a[], int n)
{
	int SNT = 1;
	for (int i=0;i<n;i++)
	{
		for (int j=2;j<=sqrt(a[i]);j++)
			if (a[i]%j==0)
			{
				SNT = 0;
				break;
			}
		if (SNT==1) 
			cout <<"  "<<a[i];
}
//Ham liet ke so chinh phuong trong mang
void lietkeSCP(int a[], int n)
{
	for (int i=0;i<n;i++)
		if (sqrt(a[i])==(int)sqrt(a[i])) //a[i] la so chinh phuong
			cout <<"  "<<a[i];
}
void Hoanvi(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void sapxepTangdan(int a[], int n)
{
	for (int i=0;i<n-1;i++)
		for(int j=i+1;j<=n;j++)
			if (a[i]>a[j])
				Hoanvi(a[i],a[j]);
	for (int i=0;i<n-1;i++)
		cout <<"  "<<a[i];
}
void sapxepGiamdan(int a[], int n)
{
	for (int i=0;i<n-1;i++)
		for(int j=i+1;j<=n;j++)
			if (a[i]<a[j])
				Hoanvi(a[i],a[j]);
	for (int i=0;i<n-1;i++)
		cout <<"  "<<a[i];
}
void XuatMenu()
{
	cout <<"---------- Danh muc cac chuc nang ----------"<<endl;
	cout <<"\t1. Nhap phan tu am"<<endl;
	cout <<"\t2. Tim max, min"<<endl;
	cout <<"\t3. Phan tu am lon nhat va duong be nhat"<<endl;
	cout <<"\t4. Liet ke so nguyen to"<<endl;
	cout <<"\t5. Liet ke so chinh phuong"<<endl;
	cout <<"\t6. Sap xep theo thu tu tang dan"<<endl;
	cout <<"\t7. Sap xep theo thu tu giam dan"<<endl;
	cout <<"\t8. Xuat menu"<<endl;
	cout <<"\t0. Thoat chuong trinh"<<endl;
}
void main()
{
	int a[100], chon, n=0;
	NhapMang(a,n);
	cout <<"Cac phan tu cua mang la: "<<endl;
	XuatMang(a,n);
	XuatMenu();
	switch (chon)
	{
		case 1 : 
			if (dem!=0)
				cout <<"So phan tu am co trong mang la: ";
				DemAm(a,n);
			else 
				cout <<"Mang khong co phan tu am."<<endl;
		case 2 : 
			cout <<"Ket qua la: "<<endl;
			MaxMin(a,n);
		case 3 : AmDuong(a,n);
	}
	while (chon<9)
}
