#include<cstdio>
#include<iostream>
#include<locale.h>
#include<time.h>

using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	system("color 04");
	int N,exit;
	do
	{
		cout << "������� ����� �������" << endl;
		cin >> N;
		switch (N)
		{
		case 2:
		{
/*2.	����� ����� ������������� �������� �����, ������� 50*/
			int i,a,b,c;
			for (i = 1; i < 50; i++)
			{
				if (i % 2 != 0)
				{
					a = i % 10;
					b = i / 10;
					cout << i << "=" << a + b << endl;
				}
			}
		}
		break;
		case 3:
		{
			/*3.	�������� ������ � ��������� ������� ������ �� ������. ����� ����� ��������� ��� �������, ������� ����� ������ 1000 ����� (���������� ����� ������� ����������).*/
			int i, a, b, c=0,d=0;
			b = 10 + rand() % 90;
			cout << "����� ������� �� ������ " << b << endl;
			for (i = 1; i <= b; i++)
			{
				a = 100 + rand() % 1200;
				if (a >= 1000)
				{
					c++;
					d += a;
					cout << i << " " << a << endl;
				}
			}
			cout << "����� ������ ������ 1000 " << c <<" �� ����� "<<d<< endl;
		}
		break;
		case 6:
		{
			/*6.	�������� ��� �������� ������� �������� �� ������. ���������� ����� �����, ���������� �� 1985 ����, � ����� �����, ���������� ����� 1990 ����*/
			int god, i, a=0, b=0;
			int chelovek;
			chelovek = 5 + rand() % 25;
			cout << "����� � ������ " << chelovek << endl;
			for (i = 1; i <= chelovek; i++)
			{
				god = 1980 + rand() % 20;
				if (god <= 1985)
					a++;
				else if (god >= 1990)
					b++;
			}
			cout << "����� ���������� �� 1985 ���� " << a << " �������; ����� ���������� ����� 1990 ���� " << b << " �������; " << endl;
		}
		break;
		case 7:
		{
			/*7.	��� ������ �������-��������� ���������� �� ������� �������� �� ���������� ��������� � ���������� ����������. ����������, ������� ������ ����� ������ ���������, ��� ����������*/
			int i, komanda, victory, lose,a=0;
			komanda = 5 + rand() % 95;
			cout << "����������� ������ " << komanda << endl;
			for (i = 1; i <= komanda; i++)
			{
				victory = 1 + rand() % 98;
				lose = 1 + rand() % 98;
				if (victory > lose)
					a++;
			}
			cout << "������ ��������� ����� ������ ��� ��������� " << a << endl;
		}
		break;
		case 8:
		{
			/*8.	�������� ������ ������� �������� �� ������ �� ���� ���������. ���������� ���������� ��������� ������, ���������� �� �������� ������.*/
			int student;
			int ocenka1, ocenka2;
			int kollichestvo=0;
			int i;
			student = 10 + rand() % 90;
			cout << "����������� ��������� " << student << endl;
			for (i = 1; i <= student; i++)
			{
				ocenka1 = 1 + rand() % 4;
				ocenka2 = 1 + rand() % 4;
				if ((ocenka1 == 2) || (ocenka2 == 2))
					kollichestvo++;
			}
			cout << kollichestvo << " ��������� �������� ������ ���� �� �� ������ ��������" << endl;
		}
		break;
		case 9:
		{
			/*9.	�������� ����� ������� �������� �� ��������� ������ �����. �����, ������� ����� ����� 100 ��, 
			����� ������� �������� ������� (��������, ��� � ������ ����, �� ������� ����, ���� ����� �������).
			���������� ������� ����� ������ ����� � ������� ����� ��������� �����.*/
			int massa;
			int polnie=0;
			int hudie=0;
			int i, a=0, b=0, c;
			int ludey;
			ludey = 5 + rand() % 30;
			cout << "����� ����� " << ludey << endl;
			for (i = 1; i <= ludey; i++)
			{
				massa = 50 + rand() % 70;
				if (massa < 100)
				{
					hudie += massa;
					a++;
				}
				else
				{
					polnie += massa;
					b++;
				}
			}
			cout << "������� ����� ������ ����� = " << (polnie+105) / b << " ������� ����� ����� = " << hudie / a << endl;



		}
		break;
		case 5:
		{
			/*5.	�������� ����� �����, �������� �� ���� ������ �������, �� ���� ������, ...  � �� ���� ������������.
			���������� ����� ����� �����, �������� � ������, �������, ����� � �. �. ������� �����. �������� ����� � �����, �������� �� 1 � �1, �� ������������.*/
			int i;
			int kollichestvo;
			int a,b;
			int summ = 0;
			int totalsumm = 0;
			for (i = 1; i <= 11; i++)
			{
				a = 1 + rand() % 4;
				summ = 0;
				for (b = 1; b <= a; b++)
				{
					kollichestvo = 15 + rand() % 20;
					summ += kollichestvo;
					totalsumm += kollichestvo;
				}
				cout << "� " << i << " ������� ������� " << summ << " �������" << endl;
			}
			cout << "�� ���� ������� ����� ������� " << totalsumm << " ��������" << endl;
		}
		break;
		case 4:
		{
			/*4.	�������� ������ � ���������� ������� � ������ �� ���������� ����� � � ������ �� ���������� ��������. ����� ������� � ������ �� ����� 16.
			����� ����� ����� ������� �� ���� �������� (���������� �������� ����������, �� ��������, ��� ����� ������ ������� ��������� ����� ����� ������).*/
			int zhurnal;
			int stranicZhur;
			int summ = 0;
			zhurnal = 2 + rand() % 5;

				for (int b = 1; b <= zhurnal; b++)
				{
					stranicZhur = 17 + rand() % 100;
					summ += stranicZhur;
				}
				cout << "����� ������� � �������� " << summ << endl;
		}
		break;
		case 10:
		{
			/*10.	� ��������� �� ������� ��������� ���������� �����������-���������� ������������ 
			�� ������ ������, ��� ��������� � ������ (�����, ����������� �� ����������� ��������� �����).
			�������� �� ����� ������ ��������� ����� ����� ���������� ���������� ����������.*/
			int sport;
			int vremya;
			int victory=100;
			sport = 10 + rand() % 30;
			cout << "����� ����������� " << sport << endl;
			for (int i = 1; i <= sport; i++)
			{
				vremya = 10 + rand() % 100;
				if (victory > vremya)
					victory=vremya;
			}
			cout << "������ ����� " << victory << " �����" << endl;
		}
		break;
		case 11:
		{
			/*11.	!!! � ��������� ����� ���������� ���������� (��������, � �������� �������)
			����������� ������� ���������� ���������� ����������� ����������� �������, ����� �� ���� ������������ ������ ��������� �������� ������� � �������� ������,
			� ��� ���������� ������ ����������� ������� ��������������, ������� � ���� � ����� ����������. ���� �������� ������� ������ ��������� ��������� �����, ��
			�� ������������ ������ ��������� ������ ���� ����� ������; ���������� ��������� � � �������� ������� ��������.
			��������� ��������� ��� ������� ������, ������� ������ � ����� ����� ����������.*/
			int sport;
			int minocenka = 10;
			int maxocenka = 1;
			int ocenka;
			int sudey;
			int summ = 0;
			int srednee;
			sport = 10 + rand() % 90;
			cout << "����������� " << sport << endl;
			for (int i = 1; i <= sport; i++)
			{
				summ = 0;
				minocenka = 10;
				maxocenka = 1;
				for (sudey = 1; sudey <= 5; sudey++)
				{
					ocenka = 1 + rand() % 9;

					if (maxocenka < ocenka)
						maxocenka = ocenka;
					if (minocenka > ocenka)
						minocenka = ocenka;
					summ += ocenka;
				}
				srednee = ((summ - minocenka) - maxocenka) / 5;
				cout << "������� ���� " << i << " ���������� " << srednee << endl;
			}
		}
			break;
		default:cout << "��� ������ �������" << endl;
			break;
		}
		cout << "�� ������ ���������� ��������? (1)�� (2)���" << endl;
		cin >> exit;
	} while (exit == 1);

}
