#include <iostream>
#include <windows.h>

#include "Cone.h"
#include "SlicedCone.h"
#include "Ocean.h"
#include "Sea.h"
#include "Bay.h"

using namespace std;

void task1() {
	Cone c1 = Cone();
	Cone c2 = Cone(1, 2, 3, 4, 5);

	cout << "Первый конус: " << c1 << endl;
	cout << "Площадь: " << c1.square() << ", " << "Объем: " << c1.volume() << endl << endl;

	cout << "Второй конус: " << c2 << endl;
	cout << "Площадь: " << c2.square() << ", " << "Объем: " << c2.volume() << endl << endl;

	Cone* c3 = new Cone();
	float x, y, z, r, h;
	cout << "Введите координаты конуса: " << endl;
	cin >> x >> y >> z;
	cout << "Введите радиус конуса: " << endl;
	cin >> r;
	cout << "Введите высоту конуса: " << endl;
	cin >> h;

	c3->setCone(x, y, z, r, h);
	cout << endl << *c3 << endl << endl;;


	Cone arr[2];
	for (int i = 0; i < 2; i++) {
		float x, y, z, r, h;
		cout << endl << "Введите координаты конуса: " << endl;
		cin >> x >> y >> z;
		cout << "Введите радиус конуса: " << endl;
		cin >> r;
		cout << "Введите высоту конуса: " << endl;
		cin >> h;

		arr[i].setCone(x, y, z, r, h);
	}
}

void task2() {
	SlicedCone sCone1 = SlicedCone();
	SlicedCone sCone2 = SlicedCone();

	cin >> sCone1;
	cin >> sCone2;

	cout << endl << "Первый усеченный конус: " << endl;
	cout << "Площадь поферхности: " << sCone1.square() << "; Объем: " << sCone1.volume() << endl << endl;

	cout << "Второй усеченный конус: " << endl;
	cout << "Площадь поверности: " << sCone2.square() << "; Объем: " << sCone2.volume() << endl << endl;

    cout << "Усеченные конусы равны: " << sCone1.equals(&sCone2);
}
void task3() {
    Ocean oc1 = Ocean("Pacific", 9, 157, 3984, 165200000, 34.5);
    Ocean oc2 = Ocean("Arctic", 90, 0, 1225, 14750000 , 32);

    Sea s1 = Sea("Laptev", 76.1607, -125.3823, 540, 662000, 34, "Arctic");
    Sea s2 = Sea();
    s2.setName("Mediterranean");
    s2.setDepth(1541);
    s2.setSaltiness(38.55);
    s2.setSquare(2500000);

    Bay b1 = Bay("Finland", 59.5300, -26.0600, 38, 420000, 6, "", "Baltic");
    Bay b2 = Bay();
    cin >> b2;
    cout << endl << b2;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
//    task1();
//    task2();
    task3();
}