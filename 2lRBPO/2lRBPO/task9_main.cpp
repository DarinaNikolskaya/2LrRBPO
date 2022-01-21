#include <iostream>
#include "func1.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout.precision(4);

	Nikolskaya::f();
	cout << "Çàäàííûé x = " << x << "; " << endl;
cout << "Çíà÷åíèå ôóíêöèè ïðè çàäàííîì x: f = " << result << "; " << endl;
cout << "Ââåäèòå õ:";
cin >> x;
	Nikolskaya::f();
	cout << "Çíà÷åíèå ôóíêöèè ïðè ââåä¸ííîì x: f = " << result << "; " << endl;
}
