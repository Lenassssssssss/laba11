#include <iostream>
#include <string>
#include <windows.h>

#include "firstMain.h"
#include "secondMain.h"
#include "thirdMain.h"
#include "fourth.h"
#include "defaultMain.h"
using namespace std;
int main () {
	setlocale (LC_ALL, "Rus");
	boolean infinity = true;
	while (infinity) {
		cout << " 1 - ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ��������� ���������� ��������" << endl;
		cout << " 2 - ����������� ������� �������� ����� � Windows-1251 ����� � ��������� � �������� ��������� �������� ��������" << endl;
		cout << " 3 - ����� � ������� ���� �������, ���������������� ��������� �����" << endl;
		cout << " 4 - ����� �� ���������" << endl;
		char x;
		cin >> x;
		switch (x) {
			case '1': {
				firstMain ();
				break;
			}
			case '2': {
				secondMain ();
				break;
			}
			case '3': {
				thirdMain ();
				break;
			}
			case '4': {
				fourthMain ();
				infinity = false;
				break;
			}
			default: {
				defaultMain ();
				break;
			}
		}
	}
	system ("pause");
}