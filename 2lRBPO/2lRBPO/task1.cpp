#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	double f, x;
	x = 7;
	f = ((x + 2 / (sqrt(2 * x))) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2));
	cout.precision(4);
		cout << "Заданный x = " << x << "; " << endl;
	cout << "Значение функции при заданном x: f = " << f << "; " << endl;

	cout << "Введите х:";
	cin >> x;
	f = ((x + 2 / (sqrt(2 * x))) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2));
	cout << "Значение функции при введённом x: f = " << f << "; " << endl;
}
