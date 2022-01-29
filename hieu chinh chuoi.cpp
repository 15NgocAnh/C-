#include <iostream>
#include <stdio.h>
int Demsokhoangtrang(char st[100], int l)
{
	int dem = 0;
	for (int i=0;i<l;i++)
		if (st[i]==' ')
			dem++;
	return dem;
}
void Xoakhoangtrang(char st[100], int &l)
{
	int i;
	while (st[0]==' ')//Xoa khoang trang o dau chuoi
		strcpy(st,st+1);
	l = strlen(st);
	while (st[l-1]==' ')//Xoa khoang trang cuoi chuoi
	{
		strcpy(st+l-1,st+l);
		l--;
	}
	//Xoa khoang trang o giua chuoi
	i = 0;
	while (st[i]!='\0')
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
void main()
{
	char st[100];
	int l;
	cout <<"Nhap chuoi: ";
	gets(st);
	l = strlen(st);
	puts(st);
	cout <<"So khoang trang la: "<<Demsokhoangtrang(st,l)<<endl;
	Xoakhoangtrang(st,l);
	cout <<"Chuoi sau khi hieu chinh la: ";
	puts(st);
}

