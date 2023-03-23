#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	//голова
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;

	//тело

	cout << setw(33) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;

	cout << setw(32) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;

	cout << setw(31) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;

	cout << setw(30) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;

	cout << setw(35) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	//ноги
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;

	cout << setw(33) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;

	cout << setw(32) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;

	cout << setw(31) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;

	cout << setw(30) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;

	string m = "////А теперь задание 2////";
	cout << m << endl;

	double S, p, a, b, l;
	cout << "Введите число а:";
	cin >> a;
	cout << "Введите число b:";
	cin >> b;
	cout << "Введите число l:";
	cin >> l;
	p = (a + b + l) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - l));
	cout << "Площадь треугольника (S) равна:" << S << endl;
}