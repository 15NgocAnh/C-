#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define TraiMin -1
int M;
int N;
int BaiMin[50][50];
int GoMin[50][50];
void KhoitaosoluongMin(int somin)
{
	//BaiMin[0][0]=TraiMin;
	int i;
	int j;
	int dem = 0;
	do
	{
		//tao so random tu (0,N-1)
		i = rand() % M;
		j = rand() % N;
		if (BaiMin[i][j]==0)
		{
			BaiMin[i][j] = TraiMin;
			dem++;
		}
	}
	while (dem!=somin);
}
void KhoitaoBaiMin()
{
	int i,j;
	for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			BaiMin[i][j] = 0;
				cout <<"# ";
			GoMin[i][j] = 0;//Tat ca cac o chua mo
		}
		cout <<"\n";
	}
}
void DemSoMin()
{
	for (int i=0;i<M;i++)
		for (int j=0;j<N;j++)
			if (BaiMin[i][j] != TraiMin)
			{
				int dem = 0;
				if (j>0 && BaiMin[i][j-1]==TraiMin)					//trai
					dem++;
				if (i<M-1 && j>0 && BaiMin[i+1][j-1]==TraiMin)		//trai duoi
					dem++;
				if (i<M-1 && BaiMin[i+1][j]==TraiMin)				//xuong
					dem++;
				if (i<M-1 && j<N-1 && BaiMin[i+1][j+1]==TraiMin)	//xuong duoi phai
					dem++;
				if (i<M-1 && BaiMin[i][j+1]==TraiMin)				//phai
					dem++;
				if (i>0 && j<N-1 && BaiMin[i-1][j+1]==TraiMin) 		//phai tren
					dem++;
				if (i>0 && BaiMin[i-1][j]==TraiMin)					//len
					dem++;
				if (i>0 && j>0 && BaiMin[i-1][j-1]==TraiMin)		//len trai
					dem++;
				BaiMin[i][j] = dem;
			}
}
void CapnhatBaiMin()
{
	int i,j;
	for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			if (BaiMin[i][j]==TraiMin)
				cout <<"x ";
			else if (BaiMin[i][j]==0)
				cout <<". ";
			else	cout <<BaiMin[i][j]<<" ";
		}
		cout <<"\n";
	}
}
void VeBaiMin(int x, int y)
{
	int i, j;
	GoMin[x][y] = 1;
	for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			if (GoMin[i][j]==1)
			{
				if (BaiMin[i][j] == 0)
					cout <<". ";
				else 
					cout <<BaiMin[i][j]<<" ";
			}
			else 
				cout <<"# ";
		}
		cout <<"\n";
	}
}
void main()
{
	int dong, cot, somin;
	int sizemap;
	cout <<"\nNhap kich thuoc bai min: ";
	cin >>sizemap;
	M = N = sizemap;
	KhoitaoBaiMin();
	cout <<"\nNhap so luong trai min: ";
	do
	{
		cin >>somin;
		if (somin>=N*N)
			cout <<"\nSo luong trai min qua lon. Vui long nhap lai.";
	}
	while (somin >= N*N);
	KhoitaosoluongMin(somin);
	DemSoMin();
	while(1)
	{
		cout <<"\nDo vi tri (VD: 1 2): ";
		cin >>dong >> cot;
		if (BaiMin[dong][cot]==TraiMin)
		{
			CapnhatBaiMin();
			break;
		}
		VeBaiMin(dong,cot);
	}
	getch();
}
