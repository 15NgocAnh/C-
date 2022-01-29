/* Xac dinh tam giac */
#include <iostream>
#include <math.h>
void main()
{
	int a,b,c;
	cout <<"Nhap vao 3 canh cua tam giac: ";
	cin >> a >> b >> c;
	if (((a>0)&&(b>0)&&(c>0))&& ((a+b>c)||(b+c>a)||(a+c>b)))
	{
		if (a==b&&b==c)
			cout <<"Day la tam giac deu."<<endl;
		else if ((a!=b||b!=c||a!=c)&&(a==b||a==c||b==c))
			cout <<"Day la tam giac can."<<endl;
			else if ((a*a + b*b == c*c)||(a*a + c*c == b*b)||(b*b + c*c == a*a))
				cout <<"Day la tam giac vuong."<<endl;
				else if (((a==b)&&(a*a + b*b == c*c))||((a==c)&&(a*a + c*c == b*b))||((b==c)&&(b*b + c*c == a*a)))
					cout <<"Day la tam giac vuong can."<<endl;
		else 
			cout <<"Day la tam giac thuong."<<endl;
	}
	else 
		cout <<"Day khong phai 3 canh cua mot tam giac. Vui long nhap so khac!"<<endl;
}
