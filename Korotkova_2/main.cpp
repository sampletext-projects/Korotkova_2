#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Выполнила  студентка группы УЗС-111 Короткова Анастасия Игоревна\n";
	cout << "Программа для расчёта полярных координат\n";

	double x, y;
	double r, phi;

	cout << "Введите декартовые координаты: ";
	cin >> x >> y;

	r = sqrt(x * x + y * y);

	if (x > 0 && y >= 0)
	{
		phi = atan(y / x);
	}
	else if (x > 0 && y < 0)
	{
		phi = atan(y / x) + 2 * M_PI;
	}
	else if (x < 0)
	{
		phi = atan(y / x) + M_PI;
	}
	else if (x == 0 && y > 0)
	{
		phi = M_PI_2;
	}
	else if (x == 0 && y < 0)
	{
		phi = 3 * M_PI_2;
	}
	else
	{
		phi = 0;
	}

	phi = phi * 180 / M_PI;

	int grad = floor(phi);
	int min = floor((phi - grad) * 60);

	cout << "Полярные: (" << r << ", " << grad << "°"<< min <<"')\n";

	system("pause");
}
