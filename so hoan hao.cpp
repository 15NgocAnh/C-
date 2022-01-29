#include <iostream>
int KiemTraSoHoanHao(int n);
void main()
{
	int n;
	cout <<"Nhap vao n: ";
	cin >>n;
	cout <<"Cac so hoan hao tu 1 den "<<n<<" la: ";
	for (int i = 1;i<=n;i++)
		if (KiemTraSoHoanHao(i) == 1)
			cout <<"  "<<i;
}
int KiemTraSoHoanHao(int n)
{
	int Tong = 0;
	for (int i=1;i<n;i++)
		if (n%i==0) Tong += i;
	if (Tong == n) 
		return 1;
	else 
		return 0;
}	
