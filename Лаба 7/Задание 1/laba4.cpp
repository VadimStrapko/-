#include <iostream>
#include<windows.h>
using namespace std;

int main()
{	
	setlocale (LC_CTYPE, "ru");

	int a;
	unsigned char code; 

	cout << "Введите символ: ";
	cin >> code;

	cout << "Введите действие 1(англ.буквы), 2(рус.буквы), 3(цифры)" << endl;
	cin >> a;

	switch (a)
	{
		case 1:

			if (code >= 'A' && code <= 'z')
			{
				cout << "Код Windows-125 заглавной буквы  " << " - " << int(code) << endl;
				cout << "Код Windows-1251 строчной буквы  " << " - " << int(code - 32) << endl;
				cout << "Разница - 32" << endl;
			}
			else
			{
				cout << "Ошибка" << endl;
			}
			break;

		case 2:

			if (int(code) > 128 && int(code) <= 240)
			{
				cout << "Код Windows-1251 заглавной буквы  " << " - " << int(code) << endl;
				cout << "Код Windows-1251 строчной буквы " << " - " << int(code - 32) << endl;
				cout << "Разница - 32" << endl;
			}
			else
			{
				cout << "Ошибка" << endl;
			}
			break;

		case 3:

			if (code >= '0' && code <= '9')
			{
				cout << "Код Windows-1251 " << " - " << int(code) << endl;
			}
			else
			{
				cout << "Ошибка" << endl;
			}
			break;

		default:

			cout << "Завершение программы" << endl;
			exit(0);
	}

	return 0;
	
}