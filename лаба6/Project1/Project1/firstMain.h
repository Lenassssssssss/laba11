#pragma once
#include <iostream>
using namespace std;
void firstMain() {
	char lowercase_ascii;
	char uppercase_ascii;
	cout << "������� ��������� ����� �������� �������� ASCII: " << endl;
	cin >> uppercase_ascii;
	cout << "������� ��������� ����� ������� �������� ASCII: " << endl;
	cin >> lowercase_ascii;
	if (isalpha(lowercase_ascii) && isalpha(uppercase_ascii)) {
		if (lowercase_ascii - uppercase_ascii == 32) {
			cout << "������� �������� �����: " << endl;
			cout << lowercase_ascii - uppercase_ascii << endl;
		}
		else {
			cout << "�������� ���� ����" << endl;
		}
	}
	else {
		cout << "������� ������������ ������" << endl;
	}
}