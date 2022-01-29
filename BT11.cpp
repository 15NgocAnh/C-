/* Tinh nghiem phuong trinh bac hai */
#include <iostream>
#include <math.h>
void main()
{
	int a,b,c;
	float delta, x, x1, x2;
	cout <<"Nhap vao cac so nguyen a, b, c: ";
	cin >> a >> b >> c;
	if (a==0)
	{
		if (b==0)
 	 		if (c==0) 
  				cout <<"Phuong trinh co vo so nghiem."<<endl;
			else 
				cout <<"Phuong trinh vo nghiem."<<endl;
		else 
		{
			x = (float) (-c)/b;
			cout <<"Phuong trinh nghiem duy nhat x = "<<x<<endl;
		}
	}
 	else
	{
		delta = b*b - 4*a*c;
		if (delta>0)
		{
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			cout <<"Phuong trinh co hai nghiem thuc phan biet:"<<endl;
			cout <<"x1 = "<<x1<<endl;
			cout <<"x2 = "<<x2<<endl;
		}
		else if (delta==0)
		{
			x1 = x2 = (-b)/(2*a);
			cout <<"Phuong trinh co nghiem kep x1 = x2 = "<<x1<<endl;
		}
		else //delta<0
			cout <<"Phuong trinh vo nghiem."<<endl;
	}
}
