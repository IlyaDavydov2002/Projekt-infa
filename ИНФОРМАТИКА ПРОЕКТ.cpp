#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float typ, a, b, c, xvershina, yvershina, nul, null, diskr, k, b1, x0;
	cout << "������� ������������ ��� ��������? ������� 2, ���� ������������, 1, ���� ��������" << endl;
	cin >> typ;
	if (typ == 1) {
		cout << "���� ����� ���������� k?" << endl;
		cin >> k;
		cout << "���� ����� ���������� b?" << endl;
		cin >> b1;
		cout << "y = " << k << "x + " << b1 << endl;
		cout << "���: �� ���� ��� X" << endl;
		if (k == 0) {
			cout << "���: " << b1 << endl;
		}
		else if (k != 0) {
			cout << "���: �� ���� ��� Y" << endl;
		}
		if (b1 != 0 && k == 0) {
			cout << "������� ������" << endl;
		}
		if (b1 == 0 && k != 0) {
			cout << "������� ��������" << endl;
		}
		else if (k != 0 && b1 != 0) {
			cout << "������� ��� ������, ��� � ��������" << endl;
		}
		if (k > 0) {
			cout << "������� ����������� �� ���� ������� �����������" << endl;
		}
		if (k < 0) {
			cout << "������� ������� �� ���� ������� �����������" << endl;
		}
		x0 = -b1 / k;
		if (k != 0) {
			cout << "������� ������ ����, ����� x > " << x0 << " � ������ ���� ����� x < " << x0;
		}
	}
	else if (typ == 2) {
		cout << "���� ����� ���������� a?" << endl;
		cin >> a;
		cout << "���� ����� ���������� b?" << endl;
		cin >> b;
		cout << "���� ����� ���������� c?" << endl;
		cin >> c;
		cout << "y = " << a << "x*x + " << b << "� + " << c << endl;
		cout << "���: �� ���� ��� X" << endl;
		xvershina = -b / 2*a;
		yvershina = a * xvershina * xvershina + b * xvershina + c;
		cout << "���������� ������� (" << xvershina << ";" << yvershina << ")" << endl;
		if (a < 0) {
			cout << "���: �� " << yvershina << " �� -�������������" << endl;
			cout << "������� ���������� �� -������������� �� " << xvershina << " � ������� �� " << xvershina << " �� +�������������" << endl;
		}
		if (a > 0) {
			cout << "���: �� " << yvershina << " �� +�������������" << endl;
			cout << "������� ������� �� -������������� �� " << xvershina << " � ���������� �� " << xvershina << " �� +�������������" << endl;
		}
		if (yvershina != 0) {
			cout << "������� ��������" << endl;
		}
		else {
			cout << "������� ������" << endl;
		}
		diskr = b * b - 4 * a * c;
		nul = (-b + sqrt(diskr)) / (2 * a);
		null = (-b - sqrt(diskr)) / (2 * a);
		if (diskr > 0) {
			cout << "���� ������� ����� " << nul << " � " << null << endl;
		}
		if (diskr == 0) {
			cout << "� ������� ���� ���� � �� ����� " << null << endl;
		}
		if (diskr < 0) {
			cout << "� ������� ��� �����, �� ������������ ������ 0" << endl;
		}
	}
	return 0;
}
