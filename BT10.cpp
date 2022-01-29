/* Tinh tong */
#include <iostream>
void main()
{
	int n, tong = 0;
	int i = 0;
	cout <<"Nhap vao so nguyen: ";
	cin >>n;
	Tinh: tong += i;
	i++;
	if (n>i)
		goto Tinh;
		cout <<"1+2+3+...+"<<n<< "=" <<tong<<endl;
	return 0;
}
