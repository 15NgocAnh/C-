/* Chuong trinh tinh gia tri bieu thuc */
#include <iostream.h>
#include <iomanip>
void main()
{
	int n;
	float z,x;
	cout <<"Nhap vao so thuc x: "<< endl;
	cin >>x;
	cout <<"Nhap vao so nguyen n: "<< endl;
	cin >>n;
	z = (2 * x + sqrt(n))/13;
	cout <<"Ket qua la: \n"<< z << endl;	
	cout << std::setprecision(2)<<z<< endl;
}
