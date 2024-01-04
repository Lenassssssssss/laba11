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
		cout << " 1 - Определение разницы значений кодов в ASCII буквы в прописном и строчном написании латинского алфавита" << endl;
		cout << " 2 - Определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании русского алфавита" << endl;
		cout << " 3 - Вывод в консоль кода символа, соответствующего введенной цифре" << endl;
		cout << " 4 - Выход из программы" << endl;
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