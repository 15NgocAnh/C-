/* Tim boi chung nho nhat cua hai so m,n */
#include <iostream>
void main()
{
	int m, n, tich, ucln, bcnn;
	cout <<"Nhap vao so nguyen m: ";
	cin >>m;
	cout <<"Nhap vao so nguyen n: ";
	cin >>n;
	tich = m*n;
	while (m!=0 && n!=0)
	{
		if (m>n)
			m -= n;
		else n -= m;
	}
	if (m==0)
		ucln = n;
	else ucln = m;
	bcnn = tich/ucln;
	cout <<"Boi chung nho nhat la: "<<bcnn<<endl;
}
