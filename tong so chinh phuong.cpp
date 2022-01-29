#include <iostream>
int KiemTraSCP(int);
int TinhTongSCP(int);
void main()
{
	int n;
	int tong = 0;
	do 
	{
		cout <<"Nhap vao n: ";
		cin >>n;
		if (KiemTraSCP(n)==1)
		tong += n;
	}
	while (n!=0);
	cout <<"Tong cac so chinh phuong la: "<<tong<<endl;
}
int KiemTraSCP (int n)
{
		if ((int)sqrt(n)==sqrt(n))
		 	return 1;
 		else 
 			return 0;
}
/* int TinhTongSCP (int n)
{
	for (int i=1; i<n ; i++)
		if (KiemTraSCP(n)==1)
			tong += i;
		return tong;
}*/
