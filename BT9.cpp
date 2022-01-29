/* Cac thu trong tuan */
#include <iostream>
void main()
{
	int n;
	cout <<"Nhap so nguyen ban muon biet: ";
	cin >>n;
	switch (n)
	{
		case 1: cout <<"Chu nhat.";break;
		case 2: cout <<"Thu hai.";break;
		case 3: cout <<"Thu ba.";break;
		case 4: cout <<"Thu bon.";break;
		case 5: cout <<"Thu nam.";break;
		case 6: cout <<"Thu sau.";break;
		case 7: cout <<"Thu bay.";break;
		default : cout <<"Do khong phai mot thu trong tuan.";
	}
}
