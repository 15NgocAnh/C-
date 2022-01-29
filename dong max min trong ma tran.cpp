#include <iostream.h>
#include <stdio.h>
void NhapMT(int a[][20], int n, int m)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cout <<"A["<<i<<"]["<<j<<"] = ";
			cin >>a[i][j];
		}
	}
}
void XuatMT(int a[][20], int n, int m)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
			cout <<"  "<<a[i][j];
		cout <<endl;
	}
}
void XaydungmangB(int a[][20], int n, int m, int b[])
{
	for (int i=0;i<n;i++)
	{
		int tong = 0;
		for (int j=0;j<m;j++)
			tong += a[i][j];
			b[i] = tong;
				cout <<"  "<<b[i];
	}
}
void MaxMin(int b[], int n, int &vtmax, int &vtmin, int &max, int &min)
{
	vtmax = 1; vtmin = 1;
	max = b[0]; min = b[0];
	for (int i=0;i<n;i++)
	{
		if (max < b[i])
		{
			max = b[i];
			vtmax = i+1;
		}
		if (min > b[i])
		{
			min = b[i];
			vtmin = i+1;
		}
	}
	cout <<"Dong co tong lon nhat la dong "<<vtmax<<" tong bang "<<max<<endl;
	cout <<"Dong co tong be nhat la dong "<<vtmin<<" tong bang "<<min<<endl;
} 
void main()
{
	int a[20][20], b[20], n, m, vtmax, vtmin, max, min;
	cout <<"Nhap so dong cua ma tran: ";
	cin >>n;
	cout <<"Nhap so cot cua ma tran: ";
	cin >>m;
	NhapMT(a,n,m);
	cout <<"Ma tran vua nhap la: "<<endl;
	XuatMT(a,n,m);
	cout <<endl;
	cout <<"Mang B tu tong cac gia tri cua moi dong cua ma tran A la: "<<endl;
	XaydungmangB(a,n,m,b);
	cout <<endl;
	MaxMin(b,n,vtmax,vtmin,max,min);
}
