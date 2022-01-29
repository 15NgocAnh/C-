/* Tinh tong hai gio */
#include <iostream>
#include <math.h>
void main()
{
	int h1, m1, s1;
	int h2, m2, s2;
	int h, m, s;
	cout <<"Nhap vao gio thu nhat: "; 
	cin >>h1>>m1>>s1;
	cout <<"Nhap vao gio thu hai: ";
	cin >>h2>>m2>>s2;
	s = s1 + s2;
	if (s >= 60)
	{
		s %= 60;
		m = 1;
	}
	m += m1 + m2;
	if (m >= 60)
	{
		m %= 60;
		h = 1;
	}
	h += h1 + h2;
	h %= 24;
	cout <<"Tong hai gio can tim la: "<<h<< ":" <<m<< ":" <<s<<endl;
}
