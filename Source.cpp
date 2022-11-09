#include<iostream>
#include<cmath>

using namespace std;

double f(const double a);

int main()
{
	int x, y;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	double c = (f(3) + f(1. * x + 1) + 1) / (1 - f(1. * y + 1) * f(1. * y + 1));

	cout << "c = " << c << endl;

	return 0;
}

double f(const double a)
{
	return ((a * a + 1) / (sin(a) * sin(a) + 1));
}
