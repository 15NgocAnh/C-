/* Doc so co ba chu so */
#include <iostream>
#include <math.h>
void main()
{
	int n, t, c, dv;
	int flag1 = 0;
	cout <<"Nhap so nguyen co ba chu so (<1000): ";
	cin >>n;
	t = n/100;
	c = (n%100)/10;
	dv = (n%100)%10;
	switch (t)
	{
		case 1: cout <<"Dap an la: Mot tram ";break;
		case 2: cout <<"Dap an la: Hai tram ";break;
		case 3: cout <<"Dap an la: Ba tram ";break;
		case 4: cout <<"Dap an la: Bon tram ";break;
		case 5: cout <<"Dap an la: Nam tram ";break;
		case 6: cout <<"Dap an la: Sau tram ";break;
		case 7: cout <<"Dap an la: Bay tram ";break;
		case 8: cout <<"Dap an la: Tam tram ";break;
		case 9: cout <<"Dap an la: Chin tram ";break;
	}
	switch (c)
	{
		case 0: if (dv==0) cout <<"chan "; else cout <<"le ";break;
		case 1: cout <<"muoi ";break; 
		case 2: cout <<"hai muoi ";break;
		case 3: cout <<"ba muoi ";break;
		case 4: cout <<"bon muoi ";break;
		case 5: cout <<"nam muoi ";break;
		case 6: cout <<"sau muoi ";break;
		case 7: cout <<"bay muoi ";break;
		case 8: cout <<"tam muoi ";break;
		case 9: cout <<"chin muoi";break;
	}
	switch (dv)
	{
		case 1: cout <<"mot";break;
		case 2: cout <<"hai";break;
		case 3: cout <<"ba";break;
		case 4: cout <<"bon";break;
		case 5: cout <<"lam";break;
		case 6: cout <<"sau";break;
		case 7: cout <<"bay";break;
		case 8: cout <<"tam";break;
		case 9: cout <<"chin";break;
	}
	cout <<endl;
}
