#include <iostream>
#include <fstream>
void HoanVi(int &a, int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
}
void SapXep(int a[], int n)
{
	for (int i=0;i<n*n-1;i++)
		for (int j=i+1;j<n*n;j++)
			if (a[i]<a[j])
				HoanVi(a[i],a[j]);
}
void XuatMT(int *a, int n)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
			cout <<*(a+i*n+j)<<"   ";
		cout <<endl;
	}
}
void main()
{
	fstream f("matran.txt", ios::in);
	if (!f.is_open())
	{
		cout <<"Khong the mo file."<<endl;
		return 0;
	}
	else 
	{
		int *a, n;
		f >> n;
		a = new int[n*n];
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
				f >> *(a+i*n+j);
		}
		XuatMT(a,n);
		SapXep(a,n);
		cout <<"\nMa tran sau khi sap xep la:"<<endl;
		XuatMT(a,n);
		fstream f1("matran1.txt", ios::out);
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
			{
				f1 <<*(a+i*n+j);
				f1 <<" ";
			}
			f1 <<"\n";
		}
		f1.close();
		delete a;
	}
	f.close();
}
