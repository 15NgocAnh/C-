#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#define file_lophoc "Lophoc.txt"
typedef struct LopHoc
{
	char Malop[10];
	char Tenlop[50];
};
typedef struct MonHoc
{
	char Mamon[10];
	char Tenmon[100];
	int Sotinchilythuyet;
	int Sotinchithuchanh;
};
typedef struct HocPhi
{
	double Dongialythuyet;
	double Dongiathuchanh;
};
typedef struct SinhVien
{
	char MSSV[10];
	char Hoten[100];
	char Malop[10];
	char Nganh[100];
	int Namvaotruong;
};
typedef struct DangLyMonHoc
{
	char MSSV[10];
	char Mamon[10];
};
void Menu_Lophoc()
{
	cout <<"************QUAN LY LOP HOC************"<<endl;
	cout <<"\t1. Them lop hoc"<<endl;
	cout <<"\t2. Xoa lop hoc"<<endl;
	cout <<"\t3. Cap nhat lop hoc"<<endl;
	cout <<"\t4. Xem danh sach lop hoc"<<endl;
	cout <<"\t5. Thoat"<<endl;
}
void Nhaplophoc(LopHoc dslop[])
{
	int n;
	cout <<"Nhap so luong lop hoc: ";
	cin >>n;
	fstream f;
	f.open(file_lophoc, ios::out| ios::app);
	for (int i=0;i<n;i++)
	{
		fflush(stdin);
		cout <<"- Ma lop: ";
		gets(dslop[i].Malop);
		f<<dslop[i].Malop<<endl;
		fflush(stdin);
		cout <<"- Ten lop: ";
		gets(dslop[i].Tenlop);
		f<<dslop[i].Tenlop<<endl;
	}
	f.close();
}
void Xuatdslop(LopHoc dslophoc[100], int n)
{
	cout <<"Danh sach lop:"<<endl;
	for (int i=0;i<n;i++)
	{
		cout <<dslophoc[i].Malop<<"\t"<<dslophoc[i].Tenlop<<endl;
	}
}
void Xuatlophoc()
{
	fstream f;
	f.open(file_lophoc, ios::in);
	char content[50];
	int flag = 1;
	while (!f.eofbit[50])
	{
		f.getline(content,50);
		if (flag%2==0)
			cout <<content<<endl;
		else 
			cout <<content<<"\t";
		flag++;
	}
	f.close();
}
void Capnhatlophoc()
{
	LopHoc dslophoc[100];
	fstream f;
	f.open(file_lophoc, ios::in);
	char contnet[50];
	int count = 0;
	int flag = 1;
	while (!f.eofbit())
	{
		f.getline(content,50);
		if(flag%2!=0)
			dslophoc[count].Malop = content;
		else	
			dslophoc[count].Tenlop = content;
		if (flag%2==0)
			count++;
		flag++;
	}
	f.close();
	Xuatdslop(dslophoc,count);
}
