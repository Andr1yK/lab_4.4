// lab_4.4.cpp
// Кобетяк Андрій
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 12

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double R, x, xp, xk, dx, y;

	cout << "R = "; cin >> R;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "----------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		if (x <= -6)
			y = R;
		else
			if (-6 < x && x <= -1 * R)
				y = -1 * (R + x) / (R - 6);
			else
				if (-1 * R < x && x <= 0)
					y = -pow(-1 * x * (2 * R + x), 0.5) + R;
				else
					if (0 < x && x <= R)
						y = pow((R + x) * (R - x), 0.5);
					else
						y = R - x;

			cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;

		x += dx;
	}

	cout << "----------------------" << endl;

	return 0;
}
