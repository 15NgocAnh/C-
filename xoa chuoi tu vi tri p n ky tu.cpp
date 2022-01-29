#include <iostream>
#include <stdio.h>
#include <ctype.h>
void Xoakhoangtrang(char st[80], int l)
{
	int i;
	while(st[0]==' ')//Xoa khoang trang dau chuoi
		strcpy(st,st+1);
	l = strlen(st);
	while(st[l-1]==' ')//Xoa khoang trang cuoi chuoi
	{
		strcpy(st+l-1,st+l);
		l--;
	}
	//Xoa khoang trang o giua chuoi
	i = 0;
	while(st[i]!='\0')
	{
		if (st[i]==' ')
		if (st[i+1]==' ')
		{
			strcpy(st+i,st+i+1);
			i--;
			l--;
		}
		else 
			i++;
		i++;
	}
}
int Demtu(char st[80], int l)
{
	int dem = 0;
	for (int i=0;i<l;i++)
		if (st[i]==' ')
			dem++;
	return dem + 1;
}
void Xoakytu(char st[80], int &l, int p, int n)
{
	for (int i = p;i<=l;i++)
		st[i] = st[i+n];
	l = l-n;
}
void main()
{
	char st[80];
	int p, n;
	cout <<"Nhap chuoi: ";
	gets(st);
	int l = strlen(st);
	cout <<"Chuoi sau khi hieu chinh la: "<<endl;
	Xoakhoangtrang(st,l);
	puts(st);
	cout <<"So tu co trong chuoi la: "<<Demtu(st,l)<<endl;
	cout <<"Nhap vi tri can xoa va so luong ky tu: ";
	cin >>p>>n;
	Xoakytu(st,l,p,n);
	puts(st);
}
