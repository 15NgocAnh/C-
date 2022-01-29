/* Kiem tra so hoan hao */
#include <iostream>
#include <math.h>
void main()
{
	int i, n, tong = 0;
	cout <<"Nhap vao so nguyen: ";
	cin >>n;
	i = 1;
	do
	{
		if (n%i==0)
			tong += i;
			i++;
	}
	while (i<n);
	if (n==tong)
		cout <<n<<" la so hoan hao."<<endl;
	else 
		cout <<n<<" khong la so hoan hao."<<endl;
}
