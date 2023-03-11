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
//	cout << "Введите количество чисел: " << endl;
//	int n = 3;
//	cin >> n;
//	rational* arr = new rational[n];
//	for (int i = 0; i < n; i++) {
//		int x, y;
//		cout << "Введите числитель " << i + 1 << "-ого числа: " << endl;
//		cin >> x;
//		cout << "Введите знаменатель " << i + 1 << "-ого числа: " << endl;
//		cin >> y;
//		arr[i].set(x, y);
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << "Число " << i + 1 << ": ";
//		arr[i].show();
//		cout << endl;
//	}
//
//	delete arr;
//
//}
//
//void task3() {
//	cout << "Введите количество чисел: " << endl;
//	int n;
//	cin >> n;
//	if (n < 1) { return; }
//
//	rational* arr = new rational[n];
//	for (int i = 0; i < n; i++) {
//		int x, y;
//		cout << "Введите числитель " << i + 1 << "-ого числа: " << endl;
//		cin >> x;
//		cout << "Введите знаменатель " << i + 1 << "-ого числа: " << endl;
//		cin >> y;
//		arr[i].set(x, y);
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << "Число " << i + 1 << ": ";
//		arr[i].show();
//		cout << endl;
//	}
//
//	if (n > 1) {
//		cout << "Суммы: " << endl;
//		for (int i = 0; i < n - 1; i++) {
//			(arr[i] + arr[i + 1]).show();
//		}
//		cout << "Разности: " << endl;
//		for (int i = 0; i < n - 1; i++) {
//			(arr[i] - arr[i + 1]).show();
//		}
//
//		cout << "Первые 2 элемента: " << endl;
//		arr[0].show();
//		arr[1].show();
//		cout << "Первый элемент равен второму: " << (arr[0] == arr[1]) << endl;
//		cout << "Первый элемент больше второго: " << (arr[0] > arr[1]) << endl;
//
//		arr[0] = arr[1];
//		cout << "Первые 2 элемента, после переприсваивания: " << endl;
//		arr[0].show();
//		arr[1].show();
//	}
//
//	++arr[0];
//	cout << "Инкремент на первый элемент: ";
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