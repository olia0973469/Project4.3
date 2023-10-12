#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, i, z, xp, xk, dx, F;
	cout << "i = "; cin >> i;
	cout << "z = "; cin >> z;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "F" << " |" << endl;
	cout << "----------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < 0 && z != 0)
			F = -z * x * x;
		else
			if (x > 0 && i == 0)
				F = (i - x) / (z * x);
			else
				F = x / z;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}
