#include <iostream>
void NhapMT(int *a, int n)
{
	cout <<"Nhap vao gia tri:"<<endl;
	for (int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			cout <<"A["<<i<<"]["<<j<<"] = ";
			cin >>*(a+(i*n+j));
		}
}
void XuatMT(int *a, int n)
{
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout <<"  "<<*(a+(i*n+j));
		cout <<endl;
	}
}
void ChuyenVi(int *a, int n)
{
	for (int j=0;j<n;j++)
	{
		for(int i=0;i<n;i++)
			cout <<"  "<<*(a+(i*n+j));
		cout <<endl;
	}
}
void main()
{
	int *a, n;
	cout <<"Nhap vao cap do cua ma tran: ";
	cin >>n;
	a = new int[n*n];
	NhapMT(a,n);
	cout <<"Ma tran sau khi nhap la: "<<endl;
	XuatMT(a,n);
	cout <<"\nMa tran sau khi chuyen vi la:"<<endl;
	ChuyenVi(a,n);
	delete a;
}
