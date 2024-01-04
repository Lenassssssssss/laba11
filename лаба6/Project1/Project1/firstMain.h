#pragma once
#include <iostream>
using namespace std;
void firstMain() {
	char lowercase_ascii;
	char uppercase_ascii;
	cout << "Введите латинскую букву верхнего регистра ASCII: " << endl;
	cin >> uppercase_ascii;
	cout << "Введите латинскую букву нижнего регистра ASCII: " << endl;
	cin >> lowercase_ascii;
	if (isalpha(lowercase_ascii) && isalpha(uppercase_ascii)) {
		if (lowercase_ascii - uppercase_ascii == 32) {
			cout << "Разница значений кодов: " << endl;
			cout << lowercase_ascii - uppercase_ascii << endl;
		}
		else {
			cout << "Неверный ввод букв" << endl;
		}
	}
	else {
		cout << "Введены некорректные данные" << endl;
	}
}