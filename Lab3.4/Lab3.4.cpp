// Lab_03_4.cpp
// < Кобиринка Юрій >
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 4
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	// розгалуження в повній формі
	if (
		(y >= 0 && y <= R && x >= R && x <= -R) ||
		((x * x + y * y) / 2) <= (R * R) &&
		(y >= -R && y <= x - R && y <= -x - R))
	   )
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}