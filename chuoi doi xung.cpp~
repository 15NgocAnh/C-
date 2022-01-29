#include <iostream>
#include <stdio.h>
int Kiemtradoixung(char st[100], int l)
{
	//Cach khac
	/* 
	int kq = 1;
	for (int i=0;i<l/2;i++)
	{
		if (st[i] != st[l-i-1])
		{
			kq = 0;
			break;
		}
	}
	return kq;
	*/
	int kq;
	for (int i=0;i<l/2;i++)
	{
		if (st[i] != st[l-i-1])
		{
			kq = 0;
			break;
		}
		else 
			kq = 1;
	}
	return kq;
}
void main()
{
	char st[100];
	cout <<"Nhap chuoi: ";
	gets(st);
	int l =strlen(st);
	if (Kiemtradoixung(st,l)==1)
		cout <<"Chuoi doi xung."<<endl;
	else 
		cout <<"Chuoi khong doi xung."<<endl;
}
