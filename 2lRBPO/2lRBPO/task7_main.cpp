#include <iostream>
#include "task7_func.cpp"
using namespace std;
void f();
void main()
{
	setlocale(LC_ALL, "Russian");
	cout.precision(4);
	f();
cout << "Çàäàííûé x = " << x << "; " << endl;
cout << "Çíà÷åíèå ôóíêöèè ïðè çàäàííîì x: f = " << result << "; " << endl;
cout << "Ââåäèòå õ:";
cin >> x;
	f();
	cout << "Çíà÷åíèå ôóíêöèè ïðè ââåä¸ííîì x: f = " << result << "; " << endl;
}
