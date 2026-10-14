#include <iostream>
#include <windows.h>
#include <iomanip>
#include <string>
#include "Prot.h"


using namespace std;

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int ch;

	do {
		cout << setw(60) <<setfill('=') << "" << endl;
		cout << "Учёт тарифов и клиентов оператора мобильной связи" << endl;
		cout << setw(60) << setfill('=') << "" << endl;
		cout << "  1 - Вход в систему" << endl;
		cout << "  2 - Регистрация" << endl;
		cout << "  3 - Выйти из программы" << endl;
		cout << setw(60) << setfill('=') << "" << endl;
		cout << "Выберите пункт:";
		cin >> ch;
	
	} while (ch != 3);




	
}