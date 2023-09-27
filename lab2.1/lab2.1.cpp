/// lab2.1.cpp
/// Чернієнко Максима Віталійовича
/// Лабораторна робота № 2
/// Лінійні програми
/// Варіант 24
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double alpha;
	double z1;
	double z2;

	cout << "alpha = ";
	cin >> alpha;

	z1 = (sin(alpha) + sin(5 * alpha) - sin(3 * alpha)) / (cos(alpha) - cos(3 * alpha) + cos(5 * alpha));
	z2 = tan(3 * alpha);

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
}
