// Lab_03_3.cpp
// < ������� ���� >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	const double PI = 3.1415;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= (-7 - R))
		y = R;
	else
		if (-7 - R < x && x <= -7 + R)
			y = R - sqrt(R * R - (x + 7) * (x + 7));
		else
			if (-7 + R < x && x <= -4)
				y = R;
			else
				if (-4 < x && x <= 0)
					y = -(R / 4) * x;
				else
					if (0 < x && x <= PI)
						y=sin(x);
					else
						y = x - PI;



	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}