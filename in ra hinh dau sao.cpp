#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int i, j, n;
	cout <<"Nhap vao so nguyen: ";
	cin >>n;
	cout <<"In hinh vuong: "<<endl;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		cout <<" "<<"*";	
		cout <<endl;
	}
	cout <<"In hinh tam giac 1: "<<endl;
	for (i=0;i<n;i++)
	{
		for (j=0;j<i+1;j++)
		cout <<" "<<"*";
		cout <<endl;
	}
	cout <<"In hinh tam giac 2: "<<endl;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i;j++)
		cout <<" "<<"*";
		cout <<endl;
	}
	cout <<"In hinh tam giac can: "<<endl;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i-1;j++)
		cout <<" "<<" ";
		for (j=0;j<2*i+1;j++)
		cout <<" 199"<<"*";
		cout <<endl;
	}
	return 0;
}
