#include <iostream>
#include <string.h>
#include <string>
using namespace std;
#pragma warning(disable : 4996)

class Figur
{
public:
	string Name;
	Figur(string t) {
		Name = t;
	}
	virtual void S() = 0;
};

class triangle : public Figur
{
public:
	triangle(string Name) : Figur(Name) {};
	int a, a1, a2, h;
	virtual void S() {

		cout << "������� ������ ������������ ��� ��������� �����: ";
		cin >> a;
		cout << endl;

		cout << "������� ������ ������������ ��� ��������� �����: ";
		cin >> h;
		cout << endl;

		cout << "S = " << (a / 2)*h << endl;
	}
};

class square : public Figur
{
public:
	square(string Name) : Figur(Name) {};
	int a;
	virtual void S() {

		cout << "������� ������ �������� ��� ��������� �����: ";
		cin >> a;
		cout << endl;

		cout << "S = " << a * a << endl;
	}
};

class circle : public Figur
{
public:
	circle(string Name) : Figur(Name) {};
	const float p = 3.14;
	int r;
	virtual void S() {

		cout << "������� ������ ����� ��� ��������� �����: ";
		cin >> r;
		cout << endl;

		cout << "S = " << p*(r*r) << endl;
	}
};

class trapeze : public Figur
{
public:
	trapeze(string Name) : Figur(Name) {};
	int a, b, c, d, h;
	virtual void S() {

		cout << "������� 1 ������ �������� ��� ��������� �����: ";
		cin >> a;
		cout << endl;

		cout << "������� 2 ������ �������� ��� ��������� �����: ";
		cin >> b;
		cout << endl;

		cout << "������� ������� �������� ��� ��������� �����: ";
		cin >> h;
		cout << endl;

		cout << "S = " << (a + b) / 2 * h << endl;
	}
};

int main()
{
	setlocale(NULL, "rus");
	Figur *figur[4] = {
	new triangle("�����������"),
	new square("�������"),
	new circle("����"),
	new trapeze("��������"),
	};
	for (int k = 0; k < 4; k++) {
		figur[k]->S();
	}

	system("pause");
	return 0;
}
