#pragma once
#include <iostream>
using namespace std;
void thirdMain() {
	char num;
	cout << "������� �����: " << endl;
	cin >> num;
	if (num <= 57 && num >= 48) {
		cout << "��� �������, ���������������� ��������� �����: " << endl;
		cout << num - 0 << endl;
	}
	else {
		cout << "�� ����� �� �����" << endl;
	}
}