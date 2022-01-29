/* Xet nam nhuan */
#include <iostream>
#include <math.h>
void main()
{
	int a,b,c;
	int flag1 = 0;
	cout <<"Nhap vao ngay: ";
	cin >>a;
	cout <<"Nhap vao thang: ";
	cin >>b;
	cout <<"Nhap vao nam: ";
	cin >>c;
	switch (b)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: if(b<=31) flag1 = 1;break;
		case 4:
		case 6:	
		case 9:
		case 11: if(b<=30) flag1 = 1;break;
		case 2:
			if ((((c%4==0)&&(c%100!=0))||(c%400==0))&&(c<=29)) flag1 = 1;break;
			if (a<=28) flag1 = 1;break;
		default : cout <<"Khong hop le. Vui long nhap lai!";break;
	}
	if (flag1 == 1)
	{
		cout <<"Nhap hop le!"<<endl;
		if (((c%4==0)&&(c%100!=0))||(a%400==0)) cout <<"Day la nam nhuan!"<<endl;
		else cout <<"Day khong phai nam nhuan!"<<endl;
	}
	else cout <<"Khong hop le. Vui long nhap lai!"<<endl;
}
