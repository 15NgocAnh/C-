/* Nam nao la nam nhuan */
#include <iostream>
using namespace std;
void main()
{
	int n;
	float Dung,Sai;
	cout <<"Nhap vao nam can biet: ";
	cin >>n;
	int Ketqua = (((n%4==0 && n%100!=0) || (n%400==0)) ? Dung : Sai);
	cout <<"Ket qua la: "<<Ketqua<<endl;
}
