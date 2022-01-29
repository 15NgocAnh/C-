/* Su dung ham  de tinh tong va tinh gia tri lon nhat */
#include <iostream>
int TinhTong (int a, int b);
int GiaTriLonNhat (int a, int b);
void main()
{
	int x, y, z, max;
	cout <<"Nhap vao x: ";
	cin >>x;
	cout <<"Nhap vao y: ";
	cin >>y;
	z = TinhTong(x,y);
	cout <<" Tong hai so la: "<<z<<endl;
	max = GiaTriLonNhat (x,y);
	cout <<"Gia tri lon nhat la: "<<max<<endl;
}
int TinhTong(int a, int b)
{
	return a+b;
}
int GiaTriLonNhat(int a, int b)
{
	return a>b?a:b;
}
