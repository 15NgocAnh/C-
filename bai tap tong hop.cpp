#include <iostream>
int KiemTraSNT(int n)
{
	int kq = 0;
	int dem = 0;
	for (int i=1;i<=n;i++)
		if (n%i==0) dem++;
	if (dem==2)
		kq = 1;
		return kq;
}
int KiemTraSHH(int x)
{
	int tong = 0;
	for (int i=1;i<x;i++)
		if (x%i==0) tong += i;
	if (tong==x)
		return 1;
	else 
		return 0;
}
int KiemTraSCP(int y)
{
	for (int i=1;i<=y;i++)
		if ((int)sqrt(y)==sqrt(y))
			return 1;
		else 
			return 0;
}
void XuatMenu()
{
	cout <<"---------- Danh muc cac chuc nang ----------"<<endl;
	cout <<"\t1. So nguyen to"<<endl;
	cout <<"\t2. So hoan hao"<<endl;
	cout <<"\t3. So chinh phuong"<<endl;
	cout <<"\t4. Xem menu"<<endl;
	cout <<"\t0. Thoat chuong trinh"<<endl;
}
void main()
{
	int chon;
	XuatMenu();
	do 
	{
		cout <<"Chon chuc nang: ";
		cin >>chon;
		switch (chon)
		{
			case 1 : 
				int SNT;
				cout <<"\tNhap so nguyen: ";
				cin >>SNT;
				if (KiemTraSNT(SNT))
					cout <<SNT<<" la so nguyen to."<<endl;
				else 
					cout <<SNT<<" khong la so nguyen to."<<endl;
				break;
			case 2 :
				int SHH;
				cout <<"\tNhap so nguyen: ";
				cin >>SHH;
				if (KiemTraSHH(SHH)==1)
					cout <<SHH<<" la so hoan hao."<<endl;
				else 
					cout <<SHH<<" khong la so hoan hao."<<endl;
				break;
			case 3 :
				int SCP;
				cout <<"\tNhap so nguyen: ";
				cin >>SCP;
				if (KiemTraSCP(SCP)==1)
					cout <<SCP<<" la so chinh phuong."<<endl;
				else 
					cout <<SCP<<" khong la so chinh phuong."<<endl;
				break;
			case 4 : XuatMenu();
				break;
			case 0 : cout <<"Cam on ban da su dung chuong trinh!."<<endl;
				break;
		}
	}
	while (chon<5);
}
