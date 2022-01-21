#include <iostream>
#include <math.h>
using namespace std;
double f(double x);
void main()
{
	setlocale(LC_ALL, "Russian");
	double x;
	cout.precision(4);
	x = 7;
	cout << "Çàäàííûé x = " << x << "; " << endl;
	cout << "Çíà÷åíèå ôóíêöèè ïðè çàäàííîì x: f = " << f(x) << "; " << endl;
cout << "Ââåäèòå õ:";
cin >> x;
cout << "Çíà÷åíèå ôóíêöèè ïðè ââåä¸ííîì x: f = " << f(x) << "; " << endl;
}
