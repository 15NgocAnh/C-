#include <iostream>
#include <stdio.h>
#include <string.h>
void Chuoicon(char *st1, char *st2)
{
	if (strstr(st1,st2))
		cout <<"Chuoi st2 la chuoi con cua st1."<<endl;
	else 
		cout <<"Chuoi st2 khong la chuoi con cua st1."<<endl;
}
void Ghepchuoi(char *st1, char *st2)
{
	char *st;
	st1 = strcat(st1," ");
	st = strcat(st1,st2);
	puts(st);
}
void main()
{
	char st1[100], st2[100], st[200];
	cout <<"Nhap chuoi st1: ";
	gets(st1);
	cout <<"Nhap chuoi st2: ";
	gets(st2);
	Chuoicon(st1,st2);
	cout <<"Chuoi sau khi ghep la: "<<endl;
	Ghepchuoi(st1,st2);
}
