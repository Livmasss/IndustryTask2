//#include <iostream>
//#include "eq2.h"
//#include "rational.h"
//
//using namespace std;
//
//
//eq2 operator + (eq2 e1, eq2 e2) {
//	eq2 eq = eq2(e2.getA() + e1.getA(), e2.getB() + e1.getB(), e2.getC() + e1.getC());
//	return eq;
//}
//
//extern rational operator- (rational r1, rational r2) {
//	rational neg_r2 = rational(-r2.a, r2.b);
//	return r1 + neg_r2;
//}
//
//void task1() {
//	eq2 e1 = eq2(1, 2, 1);
//	eq2 e2 = eq2(-2, 1, 3);
//
//	cout << e1.find_Y(0) << endl;
//	cout << e2.find_X() << endl;
//
//	eq2 e3 = e1 + e2;
//	cout << e3.find_X();
//}
//
//void task2() {
//	cout << "������� ���������� �����: " << endl;
//	int n = 3;
//	cin >> n;
//	rational* arr = new rational[n];
//	for (int i = 0; i < n; i++) {
//		int x, y;
//		cout << "������� ��������� " << i + 1 << "-��� �����: " << endl;
//		cin >> x;
//		cout << "������� ����������� " << i + 1 << "-��� �����: " << endl;
//		cin >> y;
//		arr[i].set(x, y);
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << "����� " << i + 1 << ": ";
//		arr[i].show();
//		cout << endl;
//	}
//
//	delete arr;
//
//}
//
//void task3() {
//	cout << "������� ���������� �����: " << endl;
//	int n;
//	cin >> n;
//	if (n < 1) { return; }
//
//	rational* arr = new rational[n];
//	for (int i = 0; i < n; i++) {
//		int x, y;
//		cout << "������� ��������� " << i + 1 << "-��� �����: " << endl;
//		cin >> x;
//		cout << "������� ����������� " << i + 1 << "-��� �����: " << endl;
//		cin >> y;
//		arr[i].set(x, y);
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << "����� " << i + 1 << ": ";
//		arr[i].show();
//		cout << endl;
//	}
//
//	if (n > 1) {
//		cout << "�����: " << endl;
//		for (int i = 0; i < n - 1; i++) {
//			(arr[i] + arr[i + 1]).show();
//		}
//		cout << "��������: " << endl;
//		for (int i = 0; i < n - 1; i++) {
//			(arr[i] - arr[i + 1]).show();
//		}
//
//		cout << "������ 2 ��������: " << endl;
//		arr[0].show();
//		arr[1].show();
//		cout << "������ ������� ����� �������: " << (arr[0] == arr[1]) << endl;
//		cout << "������ ������� ������ �������: " << (arr[0] > arr[1]) << endl;
//
//		arr[0] = arr[1];
//		cout << "������ 2 ��������, ����� ����������������: " << endl;
//		arr[0].show();
//		arr[1].show();
//	}
//
//	++arr[0];
//	cout << "��������� �� ������ �������: ";
//	arr[0].show();
//
//	delete arr;
//}
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	task1();
//	//task2();
//	//task3();
//}