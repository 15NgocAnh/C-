#include <iostream>
#include <math.h>
void main()
{
	int n;
	float x,t;
	cout <<"Nhap so nguyen n: ";
	cin >> n;
	cout <<"Nhap so thuc x: ";
	cin >> x;
	t = (x*n)/2 + 2.32*pow(x,3);
	cout <<"Ket qua la: " <<t<<endl;
}
