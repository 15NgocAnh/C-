/* Xep loai diem cho hoc sinh */
#include <iostream>
void main()
{
	float diemTB;
	cout <<"Nhap vao diem trung binh: ";
	cin >>diemTB;
	if (diemTB<5)
		cout <<diemTB<< ": Xep loai hoc luc kem."<<endl;
	else if (diemTB>=5 && diemTB<7)
		cout <<diemTB<< ": Xep loai hoc luc trung binh."<<endl;
		else if (diemTB>=7 && diemTB<8)
			cout <<diemTB<< ": Xep loai hoc luc kha."<<endl;
			else if (diemTB>=8 && diemTB<9)
				cout <<diemTB<< ": Xep loai hoc luc gioi."<<endl;
				else 
					cout <<diemTB<< ": Xep loai hoc luc xuat sac."<<endl;
	return 0;
}
