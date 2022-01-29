#include <iostream>
int F1(int);
int F2(int);
float F3(int);
float F4(int);
void main()
{
	int n;
	cout <<"Nhap vao n: ";
	cin >>n;
	cout <<"Dap an la: "<<endl;
	cout <<"\tF1 = 1+2+3+...+"<<n<<" = "<<F1(n)<<endl;	
	cout <<"\tF2 = 1+3+5+...+"<<n<<" = "<<F2(n)<<endl;
	cout <<"\tF3 = 1+1/2+1/3+...+1/"<<n<<" = "<<F3(n)<<endl;
	cout <<"\tF4 = 1-1/2+1/3-...1/"<<n<<" = "<<F4(n)<<endl;
}
int F1(int n)
{
	int kq = 0;
	for (int i=1;i<=n;i++)
		kq += i;
	return kq;
}
int F2(int n)
{
	int kq = 0;
	for (int i=1;i<=n;i+=2)
		kq += i;
	return kq;
}
float F3(int n)
{
	float kq = 0;
	for (int i=1;i<=n;i++)
		kq += (float)1/i;
	return kq;
}
float F4(int n)
{
	float kq = 0;
	for (int i=1;i<=n;i++)
		if (i%2==1)
			kq += (float)1/i;
		else
			kq -= 1/i;
	return kq;
}
