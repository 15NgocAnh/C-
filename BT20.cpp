/* Bo nghiem nguyen thoa man phuong trinh */
#include <iostream>
void main()
{
	int x,y,z;
	int dem = 0;
	for (x=1;x<=135;x++)
		for (y=1;y<=135;y++)
			for (z=1;z<=135;z++)
				if (3*x + 5*y + 7*z == 135)
				{
					cout <<"(x,y,z) = ("<<x<<","<<y<<","<<z<<")"<<endl;
					dem++;
				}
	cout <<"Co tong cac bo nghiem thoa man la: "<<dem<<endl;
}
