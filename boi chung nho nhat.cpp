#include <iostream>
int UCLN (int, int);
int BCNN (int, int);
void main()
{
	int m, n;
	cout <<"Nhap vao n: ";
	cin >>n;
	cout <<"Nhap vao m: ";
	cin >>m;
	cout <<"Boi chung nho nhat cua "<<n<<" va "<<m<<" la: "<<BCNN(n,m)<<endl;
}
int UCLN (int n, int m)
{
	while (n!=0&&m!=0)
	{
		if (n>m)
			n -= m;
		else
			m -= n;
	}
	if (n==0)
		return m;
	else
		return n;
}
int BCNN (int n, int m)
{
	return n*m/UCLN(n,m);
}
