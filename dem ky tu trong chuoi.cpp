#include <iostream>
#include <stdio.h>
#include <ctype.h>
void Demkytu(char st[200], int l)
{
	int dem1=0, dem2=0, dem3=0;
	for (int i=0; i<l; i++)
	{
		if (islower(st[i]))
			dem1++;
		if (isupper(st[i]))
			dem2++;
		if (isalpha(st[i])==0)
			dem3++;
	}
	cout <<"So ky tu thuong la: "<<dem1<<endl;
	cout <<"So ky tu hoa la: "<<dem2<<endl;
	cout <<"So ky tu khong phai la chu cai la: "<<dem3<<endl;
}
void main()
{
	char st[200];
	int l;
	cout <<"Nhap vao chuoi: ";
	gets(st);
	puts(st);
	l = strlen(st);
	Demkytu(st,l);
}
