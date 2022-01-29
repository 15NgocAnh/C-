/* In ra man hinh day so nguyen to */
#include <iostream>
#include <math.h>
void main()
{
	int n, i;
	cout <<"Nhap vao so nguyen: ";
	cin >>n;
	for (int k=2;k<=n;k++)
	{
		int dem = 0;
		for (i=2;i<k;i++)
			if (k%i==0) dem ++;
		if (dem==0)
			cout <<k<<" la so nguyen to."<<endl;
		//else 
			//cout <<k<<" khong la so nguyen to."<<endl;
	}
}
