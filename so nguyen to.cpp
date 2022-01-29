#include <iostream>
int KiemTraSNT(int n);
void XuatSNT(int n);
int TongSNT(int n);
void main()
{
	int n, Tong = 0;
	cout <<"Nhap vao so nguyen n: ";
	cin >>n;
	XuatSNT(n);
	Tong = TongSNT(n);
	cout <<"\nTong cac so tu 1 den "<<n<<" la: "<<Tong<<endl;
}
int KiemTraSNT(int n)
{
	int dem = 0;
	for (int i = 1; i<=n; i++)
		if (n%i == 0) 
			dem ++;
	if (dem==2)
		return 1;
	else
		return 0;
}
void XuatSNT (int n)
{
	for (int i=1;i<=n;i++)
		if (KiemTraSNT(i) == 1)
			cout <<" "<<i;
}
int TongSNT (int n)
{
	int Tong = 0;
	for (int i=1;i<=n;i++)
		if (KiemTraSNT(i) == 1)
		Tong += i;
	return Tong;
}

