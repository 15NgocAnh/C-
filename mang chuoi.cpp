#include <iostream>
#include <stdio.h>
void main()
{
	char *name[5];
	int i;
	for (i=0;i<5;i++)
		name[i] = new char[20];
	for (i=0;i<5;i++)
	{
		cout <<"Input name " << i+1 <<": ";
		gets(name[i]);
	}
	cout <<"Chuoi: ";
	for (int i=0;i<5;i++)
		cout << name[i] << ", ";
}
