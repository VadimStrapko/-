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
				cout << "��� Windows-125 ��������� �����  " << unsigned char(int(code[i]) - 32) << " - " << int(code[i]) - 32 << endl;
				cout << "��� Windows-1251 �������� �����  " << code[i] << " - " << int(code[i]) << endl;
			}
			else
			{
				cout << "������" << endl;
			}
		}
		cout << "������� - 32" << endl;
		break;
	}

	case 2:
	{
		for (int i = 0; i < n; i++)
		{
			if (int(code[i]) >= 192 && int(code[i]) <= 255)
			{
				cout << "��� Windows-1251 ��������� �����  " << unsigned char(int(code[i]) - 32) << " - " << int(code[i]) << endl;
				cout << "��� Windows-1251 �������� ����� " << code[i] << " - " << int(code[i] - 32) << endl;
			}
			else
			{
				cout << "������" << endl;
			}
		}
		cout << "������� - 32" << endl;
		break;
	}

	case 3:
	{
		for (int i = 0; i < n; i++)
		{
			if (code[i] >= '0' && code[i] <= '9')
			{
				cout << "��� Windows-1251 " << " - " << int(code[i]) << endl;
			}
			else
			{
				cout << "������" << endl;
			}
		}
		break;
	}

	default:
	{
		cout << "���������� ���������" << endl;
		exit(0);
	}
	}
}
