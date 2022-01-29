/* Tim gia tri min, max trong 4 so */
#include <iostream>
void main()
{
	int a, b, c, d;
	cout <<"Nhap vao so nguyen thu nhat: ";
	cin >>a;
	cout <<"Nhap vao so nguyen thu hai: ";
	cin >>b;
	cout <<"Nhap vao so nguyen thu ba: ";
	cin >>c;
	cout <<"Nhap vao so nguyen thu bon: ";
	cin >>d;
	int min1 = (a < b ? a : b);
	int min2 = (c < d ? c : d);
	int max1 = (a > b ? a : b);
	int max2 = ( c > d ? c : d);
	int min = (min1 < min2 ? min1 : min2);
	int max = (max1 > max2 ? max1 : max2);
	cout <<"So lon nhat la: "<<max<<endl;
	cout <<"So nho nhat la: "<<min<<endl;
	return 0;
}
