// Степанчук Сергій 
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 20

#include <iostream> 
#include <iomanip>

using namespace std;

void main() {
	double x, x_end, x_delta, y;

	cout.setf(ios::left);
	cout << setw(10) << "x start" << " = "; cin >> x;
	cout << setw(10) << "x end" << " = "; cin >> x_end;
	cout << setw(10) << "d delta" << " = "; cin >> x_delta;
	
	cout << "--------------------------------" << endl; // 32
	cout << "|" << setw(14) << "x" << " |" << setw(14) << "y" << "|" << endl; // 14
	cout << "--------------------------------" << endl; // 32
	
	cout << fixed;
	for (; x <= x_end; x+=x_delta)
	{
		y = tan(x) + 1;
		if (x <= -5)
			y -= exp(x / (int)(1 - x));
		else if (x <= 3)
			y -= 3.2 + log10(1.8 * x * x);
		else
			y -= abs(x) * sqrt(x);

		cout << "|" << setprecision(2) << setw(14) << x << " |" << setw(14) << setprecision(3) << y << "|" << endl;
		cout << "--------------------------------" << endl; // 32
	}
}