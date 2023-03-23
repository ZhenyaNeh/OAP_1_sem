#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	//Верхушка
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;

	cout << setw(34) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	//основная часть(тело)
	cout << setw(23) << setfill(probel) << probel;
	cout << setw(26) << setfill(c) << c << endl;

	cout << setw(26) << setfill(probel) << probel;
	cout << setw(20) << setfill(c) << c << endl;

	cout << setw(28) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;

	cout << setw(29) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;

	cout << setw(29) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
	//ноги
	

	cout << setw(28) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c ;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;

	cout << setw(27) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c ;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;

	cout << setw(26) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c;
	cout << setw(13) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;

	string m = "////А теперь задание 2////";
	cout << setw(40) << setfill(probel) << probel;
	cout << m << endl;

	double y1, y2,uy, x1, x2,ux, S;
	cout << "Введите x1:";
	cin >> x1;
	cout << "Введите y1:";
	cin >> y1;
	cout << "Введите x2:";
	cin >> x2;
	cout << "Введите y2:";
	cin >> y2;

	if(x1>x2) {
		ux = x1 - x2;
	}
	else {
		ux = x2 - x1;
	}

	if (y1 > y2) {
		uy = y1 - y2;
	}
	else {
		uy = y2 - y1;
	}

	S = sqrt(pow(ux, 2) + pow(uy, 2));												
	cout << "Расстояние(S) между точками ровно:" << S << endl;

}
