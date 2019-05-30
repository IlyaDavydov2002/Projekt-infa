#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float typ, a, b, c, xvershina, yvershina, nul, null, diskr, k, b1, x0;
	cout << "Функция квадратичная или линейная? Нажмите 2, если квадратичная, 1, если линейная" << endl;
	cin >> typ;
	if (typ == 1) {
		cout << "Чему равен коэффицент k?" << endl;
		cin >> k;
		cout << "Чему равен коэффицент b?" << endl;
		cin >> b1;
		cout << "y = " << k << "x + " << b1 << endl;
		cout << "ООФ: по всей оси X" << endl;
		if (k == 0) {
			cout << "ОЗФ: " << b1 << endl;
		}
		else if (k != 0) {
			cout << "ОЗФ: по всей оси Y" << endl;
		}
		if (b1 != 0 && k == 0) {
			cout << "функция четная" << endl;
		}
		if (b1 == 0 && k != 0) {
			cout << "функция нечетная" << endl;
		}
		else if (k != 0 && b1 != 0) {
			cout << "функция как четная, так и нечетная" << endl;
		}
		if (k > 0) {
			cout << "функция возврастает на всей области определения" << endl;
		}
		if (k < 0) {
			cout << "функция убывает на всей области определения" << endl;
		}
		x0 = -b1 / k;
		if (k != 0) {
			cout << "функция больше нуля, когда x > " << x0 << " и меньше нуля когда x < " << x0;
		}
	}
	else if (typ == 2) {
		cout << "Чему равен коэффицент a?" << endl;
		cin >> a;
		cout << "Чему равен коэффицент b?" << endl;
		cin >> b;
		cout << "Чему равен коэффицент c?" << endl;
		cin >> c;
		cout << "y = " << a << "x*x + " << b << "х + " << c << endl;
		cout << "ООФ: по всей оси X" << endl;
		xvershina = -b / 2*a;
		yvershina = a * xvershina * xvershina + b * xvershina + c;
		cout << "координаты вершины (" << xvershina << ";" << yvershina << ")" << endl;
		if (a < 0) {
			cout << "ОЗФ: от " << yvershina << " до -бесконечности" << endl;
			cout << "функция возрастает от -бесконечности до " << xvershina << " и убывает от " << xvershina << " до +бесконечности" << endl;
		}
		if (a > 0) {
			cout << "ОЗФ: от " << yvershina << " до +бесконечности" << endl;
			cout << "функция убывает от -бесконечности до " << xvershina << " и возрастает от " << xvershina << " до +бесконечности" << endl;
		}
		if (yvershina != 0) {
			cout << "функция нечетная" << endl;
		}
		else {
			cout << "функция четная" << endl;
		}
		diskr = b * b - 4 * a * c;
		nul = (-b + sqrt(diskr)) / (2 * a);
		null = (-b - sqrt(diskr)) / (2 * a);
		if (diskr > 0) {
			cout << "нули функции равны " << nul << " и " << null << endl;
		}
		if (diskr == 0) {
			cout << "у функции один ноль и он равен " << null << endl;
		}
		if (diskr < 0) {
			cout << "у функции нет нулей, тк дискриминант меньше 0" << endl;
		}
	}
	return 0;
}
