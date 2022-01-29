#include<iostream>
#include<math.h>
void main()
{
	int n;
	float x,k;
	cout <<"Nhap so nguyen n: "<< endl;
	cin >>n;
	cout <<"Nhap so thuc x: "<< endl;
	cin >>x;
	k = pow((x*x+x+1),n) + pow((x*x-x+1),n);
	cout <<"Ket qua la: \n"<< k << endl;
}
