#include <iostream>
void NhapMT(float *a, int n)
{
	cout <<"Nhap vao gia tri: "<<endl;
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
		{
			cout <<"A["<<i<<"]["<<j<<"] = ";
			cin >>*(a+(i*n+j));//A[i][j]
		}
}
void XuatMT(float *a, int n)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
			cout <<"  "<<*(a+(i*n+j));
		cout <<endl;
	}
}
float TimMax(float *a, int n)
{
	float max = a[0];
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			if (*(a+(i*n+j))>max)
				max = *(a+(i*n+j));
	return max;
}
float KiemtraDoixung(float *a, int n)
{
	for (int i=1;i<n-1;i++)
		for (int j=0;j<n;j++)
			if (*(a+(i*n+j))!=*(a+(j*n+i)))
				return 0;
			return 1;
}
void main()
{
	float *a;
	int n;
	cout <<"Nhap vao cap ma tran: ";
	cin >>n;
	a = new float[n*n];
	if (a==NULL)
	{
		cout <<"Khong du vung nho.";
		exit(0);
	}
	NhapMT(a,n);
	cout <<"Ma tran sau khi nhap la: "<<endl;
	XuatMT(a,n);
	cout <<endl;
	cout <<"So lon nhat trong ma tran la: "<<TimMax(a,n)<<endl;
	if (KiemtraDoixung(a,n)==0)
		cout <<"Ma tran khong doi xung."<<endl;
	else 
		cout <<"Ma tran doi xung."<<endl;
	delete a;
}
