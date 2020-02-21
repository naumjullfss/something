#include "pch.h"
#include <iostream>
#include <limits>
#include <iomanip>



using namespace std;
/// xml_summary_tag.cpp
/// compile with /LD /clr /doc
/// post-build command: xdcmake xml_summary_tag.dll

/// xml_returns_tag.cpp
/// compile with /LD /clr /doc
/// post-build command: xdcmake xml_returns_tag.dll

/// xml_param_tag.cpp
/// compile with /clr /doc /LD
/// post-build command: xdcmake xml_param_tag.dll

///<summary> Нахождение точек пересечения, их координат</summary>
int main()
	{
	setlocale(LC_ALL, "Russian");

		double R, k, b, d, x1, x2, y1, y2;

	m1:cout << "Введите радиус окружности: \n";
		cin >> R;
		if (!cin) {
			cout << "Неверное значение!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			goto m1;
		}


	m2:cout << "Введите коэффициент k: \n";
		cin >> k;
		if (!cin) {
			cout << "Неверное значение!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			goto m2;
		}

	m3:cout << "Введите коэффициент b: \n";
		cin >> b;
		if (!cin) {
			cout << "Неверное значение!" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			goto m3;
		}
			// if (R == 0 && k == 0 && b == 0)
			// Добавление скобок для очевидности решения 
		if ((R == 0) && (k == 0) && (b == 0))
			cout << "Прямая и окружность не заданы!" << endl;
		d = -b * b + R * R + k * k * R * R;

		if (d < 0)
			cout << "Точек пересечения нет!" << endl;
		else if (d > 0) {
			x1 = (-b * k + sqrt(d)) / (1 + k * k);
			x2 = (-b * k - sqrt(d)) / (1 + k * k);
			y1 = k * x1 + b;
			y2 = k * x2 + b;
			cout << "Пересечение в двух точках: " << endl;
			cout << "x1 = " << setprecision(3) << x1 << " y1 = " << y1 << "\nx2 = " << setprecision(3) << x2 << " y2 = " << y2 << endl;
		}
		else if (d == 0) {
			cout << "Прямая касается окружности: " << endl;
			x1 = (-b * k + sqrt(d)) / (1 + k * k);
			y1 = k * x1 + b;
			cout << "x = " << setprecision(3) << x1 << " y = " << y1 << endl;
		}
		
	system("pause");

}
