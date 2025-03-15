#include "FindCode.h"



void FindCode(int& a, unsigned char code[], int n)
{
	switch (a)
	{

	case 1:
	{
		for (int i = 0; i < n; i++)
		{
			if (code[i] >= 'a' && code[i] <= 'z')
			{
				cout << "Код Windows-125 заглавной буквы  " << unsigned char(int(code[i]) - 32) << " - " << int(code[i]) - 32 << endl;
				cout << "Код Windows-1251 строчной буквы  " << code[i] << " - " << int(code[i]) << endl;
			}
			else
			{
				cout << "Ошибка" << endl;
			}
		}
		cout << "Разница - 32" << endl;
		break;
	}

	case 2:
	{
		for (int i = 0; i < n; i++)
		{
			if (int(code[i]) >= 192 && int(code[i]) <= 255)
			{
				cout << "Код Windows-1251 заглавной буквы  " << unsigned char(int(code[i]) - 32) << " - " << int(code[i]) << endl;
				cout << "Код Windows-1251 строчной буквы " << code[i] << " - " << int(code[i] - 32) << endl;
			}
			else
			{
				cout << "Ошибка" << endl;
			}
		}
		cout << "Разница - 32" << endl;
		break;
	}

	case 3:
	{
		for (int i = 0; i < n; i++)
		{
			if (code[i] >= '0' && code[i] <= '9')
			{
				cout << "Код Windows-1251 " << " - " << int(code[i]) << endl;
			}
			else
			{
				cout << "Ошибка" << endl;
			}
		}
		break;
	}

	default:
	{
		cout << "Завершение программы" << endl;
		exit(0);
	}
	}
}
