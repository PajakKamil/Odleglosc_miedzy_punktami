#include <iostream>
#include <cmath>
#include <vector>
#include <time.h>
#include <random>
#include <conio.h>
#include <windows.h>
#include "Odleglosc_miedzy_punktami.h"

//void Zadanie_1_NZ();
//void Zadanie_2_NZ();
//void Zadanie_3_NZ();
//void Zadanie_4_NZ();

int main()
{
	system("chcp 1250");
	//char a;
	//HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	//do
	//{
	//	system("cls");
	//	//SetConsoleCursorPosition(h, { 0, 4 });
	//	std::cout << "\nJa Kamil Pająk oświadczam, że przesłana praca była przeze mnie\nprzygotowana samodzielnie. Podczas pisania zadania nie korzystałem\nz materiałów, telefonu, Internetu ani pomocy innych osób\n";
	//	std::cout << "\n1. Zadanie 1\n" << "2. Zadanie 2\n" << "3. Zadanie 3\n" << "4. Zadanie 4\n" << "5. Wyjdź" << std::endl;
	//	a = _getch();
	//	if (a <= '5' && a >= '1')
	//	{
	//		switch (a)
	//		{
	//		case '1':
	//			//SetConsoleCursorPosition(h, { 0, 10 });
	//			Zadanie_1_NZ();
	//			std::cout << std::endl;
	//			system("pause");
	//			break;


	//		case '2':
	//			//SetConsoleCursorPosition(h, { 0, 10 });
	//			Zadanie_2_NZ();
	//			std::cout << std::endl;
	//			system("pause");
	//			break;


	//		case '3':
	//			//SetConsoleCursorPosition(h, { 0, 10 });
	//			Zadanie_3_NZ();
	//			std::cout << std::endl;
	//			system("pause");
	//			break;


	//		case '4':
	//			//SetConsoleCursorPosition(h, { 0, 10 });
	//			Zadanie_4_NZ();
	//			std::cout << std::endl;
	//			system("pause");
	//			break;

	//		case '5':
	//			return 0;

	//		default:
	//			break;
	//		}
	//	}
	//	/*COORD pozycja_kursora;
	//	pozycja_kursora.X = 0;
	//	pozycja_kursora.Y = 4;*/
	//} while (true);

	Najblizszy_punkt();
	std::cout << "\n\n";
	Najdalszy_punkt();

	return 0;
}
//void Zadanie_1_NZ()
//{
//	std::cout << "\n\n--------------------Zadanie 1--------------------\n\n";
//	const int R = 6;
//	int ntab[R];
//	std::cout << "Podaj " << R << " liczb(y): ";
//	for (int i = 0; i < R; i++)
//	{
//		std::cin >> ntab[i];
//	}
//
//	int licznik{}, licznik_z_zerem{};
//	for (int i = 0; i < R; i++)
//	{
//		for (int j = 0; j < R; j++)
//		{
//			if (i != j)
//			{
//				if (ntab[j] != 0)
//				{
//					std::cout << ntab[i] << " / " << ntab[j] << " = " << ntab[i] / (float)ntab[j] << std::endl;
//					licznik++;
//				}
//				else
//				{
//					std::cout << ntab[i] << " / " << ntab[j] << " = " << " Nie można dzielić przez 0!!!\n";
//				}
//
//				licznik_z_zerem++;
//			}
//		}
//	}
//	std::cout << "\nWystępuje: " << licznik << " kombinacji (liczone tylko poprawne działania)\nlub: " << licznik_z_zerem << " wszystkich kombinacji (łącznie z dzieleniem przez 0)\n";
//	return;
//}
//
//void Zadanie_2_NZ()
//{
//	std::cout << "\n\n--------------------Zadanie 2--------------------\n\n";
//	const int R = 4;
//	int ntab[R];
//	std::cout << "Podaj cztery liczby całkowite: ";
//	for (int i = 0; i < R; i++)
//	{
//		std::cin >> ntab[i];
//	}
//	int wynik;
//	if (ntab[0] > -100 && ntab[0] < 100)
//	{
//		wynik = ntab[1] * 13;
//	}
//	else if (ntab[0] < -250 || ntab[0] > 250)
//	{
//		wynik = ntab[2] * -23;
//	}
//	else if (ntab[0])
//	{
//		wynik = ntab[3] * -11;
//	}
//
//	std::cout << "Wynik pierwszej operacji: " << wynik << std::endl;
//
//	if (wynik % 5 == 0 && wynik % 3 == 0)
//	{
//		wynik = round(pow(ntab[3], 2));
//	}
//	else if (wynik % 3 == 0)
//	{
//		wynik = round(sqrt(ntab[2]));
//	}
//	else if (wynik % 5 == 0)
//	{
//		wynik = abs(ntab[1]);
//	}
//	else
//	{
//		wynik = round((ntab[0] + ntab[1] + ntab[2] + ntab[3]) / 4);
//	}
//
//	std::cout << "Wynik drugiej operacji: " << wynik << std::endl;
//
//	if (ntab[0] > 0)
//	{
//		wynik = ntab[1] & ntab[2];
//	}
//	else if (ntab[1] < 0)
//	{
//		wynik = ntab[2] | ntab[3];
//	}
//	else if (ntab[0] == 0)
//	{
//		wynik = ntab[1] ^ ntab[3];
//	}
//
//	std::cout << "Wynik trzeciej operacji: " << wynik << std::endl;
//
//	return;
//}
//
//void Zadanie_3_NZ()
//{
//	std::cout << "\n\n--------------------Zadanie 3--------------------\n\n";
//	std::cout << "Podaj wartości (R, G, B): ";
//	int R, G, B;
//	std::cin >> R >> G >> B;
//	std::vector<std::string> kolory(8);
//	bool multi = R + G + B == 3 || R + G == 2 || R + B == 2 || B + G == 2;
//	R *= 1;
//	G *= 2;
//	B *= 3;
//
//	int wynik = R + G + B + multi;
//	//std::cout << "Wynik: " << wynik << "\nmulti: " << multi << "\nR: " << R << "\nG: " << G << "\nB: " << B << std::endl;
//
//	kolory[0] = "Czarny";
//	kolory[1] = "Czerwony";
//	kolory[2] = "Zielony";
//	kolory[3] = "Niebieski";
//	kolory[4] = "Żółty";
//	kolory[5] = "Różowy";
//	kolory[6] = "Cyjan";
//	kolory[7] = "Biały";
//
//	std::cout << kolory[wynik] << std::endl;
//
//	return;
//}
//
//int Quick_sort(int ntab[], int lewy, int prawy)
//{
//	int i, j, piwot; //PIWOT TO ELEMENT ŚRODKOWY!!!!!!
//
//	i = (lewy + prawy) / 2;
//	piwot = ntab[i];
//	ntab[i] = ntab[prawy];
//
//	for (j = i = lewy; i < prawy; i++)
//	{
//		if (ntab[i] > piwot)
//		{
//			std::swap(ntab[i], ntab[j]);
//			j++;
//		}
//	}
//
//	ntab[prawy] = ntab[j];
//	ntab[j] = piwot;
//
//	//j + 1 --> Prawa strona
//	if (j + 1 < prawy)
//	{
//		Quick_sort(ntab, j + 1, prawy);
//	}
//
//	//j - 1 --> Lewa strona
//	if (lewy < j - 1)
//	{
//		Quick_sort(ntab, lewy, j - 1);
//	}
//	return 0;
//}
//void Zadanie_4_NZ()
//{
//	std::cout << "\n\n--------------------Zadanie 4--------------------\n\n";
//	srand(time(NULL));
//	const int R = 10;
//	int ntab[R];
//	char a;
//	std::cout << "1. Losowe liczby\n" << "2. Wpisz liczby samodzielnie\n";
//	do
//	{
//		a = _getch();
//	} while (a > '2' || a < '1');
//
//	switch (a)
//	{
//
//	case '1':
//		std::cout << "Wylosowane liczby to: ";
//		for (int i = 0; i < R; i++)
//		{
//			ntab[i] = rand() % 100;
//			std::cout.width(5);
//			std::cout << ntab[i];
//		}
//		std::cout << std::endl;
//		break;
//
//	case '2':
//		std::cout << "Podaj 10 liczb: ";
//		for (int i = 0; i < R; i++)
//		{
//			std::cin >> ntab[i];
//		}
//		std::cout << std::endl;
//		break;
//
//	default:
//		break;
//	}
//
//	/*int* lewy = &ntab[0];
//	int* prawy = &ntab[R - 1];*/
//	/*std::cout << "Lewy: " << *lewy << " Prawy: " << *prawy << std::endl;
//	*lewy = 10;
//	std::cout << "Lewy_nowy: " << *lewy << "Tablica[0]: " << ntab[0] << std::endl;*/
//
//	Quick_sort(ntab, 0, R - 1);
//
//	std::cout << "\nTablica posortowana:\n";
//	for (int i = 0; i < R; i++)
//	{
//		std::cout << ntab[i] << " ";
//	}
//	
//	return;
//	
//}