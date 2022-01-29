/* Doc ten nam */
#include <iostream>
#include <math.h>
void main()
{
	int n, can, chi;
	cout <<"Nhap vao nam muon biet: ";
	cin >>n;
	can = n%10;
	chi = n%12;
	switch (can)
	{
		case 0: cout <<"Do la nam: Canh ";break;
		case 1: cout <<"Do la nam: Tan ";break;
		case 2: cout <<"Do la nam: Nham ";break;
		case 3: cout <<"Do la nam: Quy ";break;
		case 4: cout <<"Do la nam: Giap ";break;
		case 5: cout <<"Do la nam: At ";break;
		case 6: cout <<"Do la nam: Binh ";break;
		case 7: cout <<"Do la nam: Dinh ";break;
		case 8: cout <<"Do la nam: Mau ";break;
		case 9: cout <<"Do la nam: Ki ";break;
	}
	switch (chi)
	{
		case 0: cout <<"Than ";break;
		case 1: cout <<"Dau ";break;
		case 2: cout <<"Tuat ";break;
		case 3: cout <<"Hoi ";break;
		case 4: cout <<"Ty ";break;
		case 5: cout <<"Suu ";break;
		case 6: cout <<"Dan ";break;
		case 7: cout <<"Mao ";break;
		case 8: cout <<"Thin ";break;
		case 9: cout <<"Ty ";break;
		case 10: cout <<"Ngo ";break;
		case 11: cout <<"Mui ";break;
	}
	cout <<endl;
}
