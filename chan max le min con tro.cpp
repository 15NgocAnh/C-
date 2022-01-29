#include <iostream>
void NhapMang(int *a, int n)
{
	cout <<"Nhap vao gia tri: "<<endl;
	for (int i=0;i<n;i++)
	{
		cout <<"A["<<i<<"] = ";
		cin >>*(a+i);
	}
}
void XuatMang(int *a, int n)
{
	for (int i=0;i<n;i++)
		cout <<"  "<<*(a+i);
}
int ChanMax(int *a, int n)
{
	int max = 0;
	for (int i=0;i<n;i++)
	{
		if (*(a+i)%2==0)
			max = *(a+i);
			break;
	}
	for (int i=0;i<n;i++)
	{
		if (*(a+i)%2==0 && *(a+i)>max)
			max = *(a+i);
	}
	return max;
}
int LeMin(int *a, int n)
{
	int min = 0;
	for (int i=0;i<n;i++)
	{
		if (*(a+i)%2!=0)
			min = *(a+i);
			break;
	}
	for (int i=0;i<n;i++)
		if (*(a+i)%2!=0 && *(a+i)<min)
			min = *(a+i);
	return min;
} 
void main()
{
	int *a,n;
	cout <<"Nhap vao kich thuoc cua mang: ";
	cin >>n;
	a = new int[n];
	NhapMang(a,n);
	cout <<"Mang sau khi nhap la: "<<endl;
	XuatMang(a,n);
	cout <<endl;
	if (ChanMax(a,n)==0)
		cout <<"Mang khong co so chan."<<endl;
	else 
		cout <<"So chan lon nhat trong mang la: "<<ChanMax(a,n)<<endl;
	if (LeMin(a,n)==0)
		cout <<"Mang khong co so le."<<endl;
	else 
		cout <<"So le nho nhat trong mang la: "<<LeMin(a,n)<<endl;
	delete a;
}
