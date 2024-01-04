#pragma once
#include <iostream>
using namespace std;
void thirdMain() {
	char num;
	cout << "Введите цифру: " << endl;
	cin >> num;
	if (num <= 57 && num >= 48) {
		cout << "Код символа, соответствующего введенной цифре: " << endl;
		cout << num - 0 << endl;
	}
	else {
		cout << "Вы ввели не цифру" << endl;
	}
}