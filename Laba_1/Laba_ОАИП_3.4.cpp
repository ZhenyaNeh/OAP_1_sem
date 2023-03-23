#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	//Верхушка
	

	cout << setw(36) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c;
	cout << setw(13) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;

	cout << setw(34) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c;
	cout << setw(9) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;

	cout << setw(32) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;

	cout << setw(31) << setfill(probel) << probel;
	cout << setw(17) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(17) << setfill(c) << c << endl;

	cout << setw(30) << setfill(probel) << probel;
	cout << setw(19) << setfill(c) << c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(19) << setfill(c) << c << endl;

	cout << setw(30) << setfill(probel) << probel;
	cout << setw(39) << setfill(c) << c << endl;

	cout << setw(30) << setfill(probel) << probel;
	cout << setw(39) << setfill(c) << c << endl;

	cout << setw(30) << setfill(probel) << probel;
	cout << setw(39) << setfill(c) << c << endl;

	cout << setw(31) << setfill(probel) << probel;
	cout << setw(37) << setfill(c) << c << endl;

	cout << setw(32) << setfill(probel) << probel;
	cout << setw(35) << setfill(c) << c << endl;

	cout << setw(33) << setfill(probel) << probel;
	cout << setw(33) << setfill(c) << c << endl;

	cout << setw(34) << setfill(probel) << probel;
	cout << setw(31) << setfill(c) << c << endl;
	/// oijoihoihohohoo
	
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(27) << setfill(c) << c << endl;

	cout << setw(38) << setfill(probel) << probel;
	cout << setw(23) << setfill(c) << c << endl;

	cout << setw(40) << setfill(probel) << probel;
	cout << setw(19) << setfill(c) << c << endl;
	
	cout << setw(42) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;
	
	cout << setw(44) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;

	cout << setw(46) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;

	cout << setw(48) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;

	cout << setw(49) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;

	string w = "////Задание второе////";
	cout << w << endl;

	double m;
	int i=2,n;
	cout << "Введите число косилок:";
	cin >> n;
	cout << "Ведите количество часов работы первой косилки:";
	cin >> m;	
	double sum = m, pot = m;
	while (i <= n)
	{
		pot +=0.166666667;
		sum += pot;
		i++;	
	}
	cout << sum << "- часов работала бригада";
	return 0;
}