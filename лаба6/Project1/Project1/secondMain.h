#pragma once
#include <iostream>
#include <windows.h>
using namespace std;
void secondMain() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned char lowercase_win;
	unsigned char uppercase_win;
	cout << "Введите русскую букву верхнего регистра Windows-1251: " << endl;
	cin >> uppercase_win;
	cout << "Введите русскую букву нижнего регистра Windows-1251: " << endl;
	cin >> lowercase_win;
	if (isalpha(lowercase_win) && isalpha(uppercase_win)) {
		if (lowercase_win >= 192 && uppercase_win >= 192) {
			if (lowercase_win - uppercase_win == 32) {
				cout << "Разница значений кодов: " << endl;
				cout << lowercase_win - uppercase_win << endl;
			}
			else {
				cout << "Неверный ввод букв" << endl;
			}
		}
		else {
			cout << "Введен символ латинского алфавита" << endl;
		}
	}
	else {
		cout << "Введены некорректные данные" << endl;
	}
}