//////////////////////////////////////////////////////////////////////////////
// Lab_13_1.cpp
// головний файл проекту – функція main
#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{

	cout << "x_p = "; cin >> xp;
	cout << "x_k = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "exp(-x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;
	while (x <= xk) {
		sum(); // виклик процедури обчислення суми
		cout << x << " "
			<< S << " "
			<< exp(x) << " "
			<< n << endl; // тут слід використовувати форматний вивід
		x += dx;
	}
	cin.get();
	cout << "|" << setw(7) << setprecision(2) << x << " |"
		<< setw(10) << setprecision(5) << exp(-x) << " |"
		<< setw(10) << setprecision(5) << S << " |"
		<< setw(5) << n << " |"
		<< endl;

	return 0;
}