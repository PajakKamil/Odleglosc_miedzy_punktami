#include "Odleglosc_miedzy_punktami.h"


double Odleglosc_pomiedzy_punktami(int Xa, int Ya, int Xb, int Yb)
{ 
	double Xab = pow((Xb - Xa), 2);
	double Yab = pow((Yb - Ya), 2);
	double odleglosc = sqrt(Xab + Yab);
	return odleglosc;
}

void Najblizszy_punkt()
{
	std::fstream punkt;

	punkt.open("Qiqson.txt", std::ios::in);
	if (punkt.good() == false)
	{
		std::cout << "Nie uda³o siê otworzyæ pliku :(";
		punkt.close();
		return;
	}

	int R;
	punkt >> R;

	int** ntab = new int* [R];
	for (int i = 0; i < R; i++)
	{
		ntab[i] = new int[2];
	}
	for (int i = 0; i < R; i++)
	{
		punkt >> ntab[i][0];
		punkt >> ntab[i][1];
	}
	
	double min_val = Odleglosc_pomiedzy_punktami(ntab[0][0], ntab[0][1], ntab[1][0], ntab[1][1]);
	int id[6];
	id[0] = 0;
	id[1] = 1;

	for (int i = 0; i < R; i++)
	{
		for (int j = 1 + i; j < R; j++)
		{
			if (min_val > Odleglosc_pomiedzy_punktami(ntab[i][0], ntab[i][1], ntab[j][0], ntab[j][1]))
			{
				min_val = Odleglosc_pomiedzy_punktami(ntab[i][0], ntab[i][1], ntab[j][0], ntab[j][1]);
				id[0] = i + 2;
				id[1] = j + 2;
				id[2] = ntab[i][0];
				id[3] = ntab[i][1];
				id[4] = ntab[j][0];
				id[5] = ntab[j][1];
			}
		}
	}

	std::cout << "Najbli¿sza odleg³oœæ to: " << min_val;
	std::cout << "\nDla punktów X1 = " << id[2] << ", Y1 = " << id[3] << " oraz " << "X2 = " << id[4] << ", Y2 = " << id[5];
	std::cout << "\nW liniach: " << id[0] << " oraz " << id[1];

	//odleglosc = Odleglosc_pomiedzy_punktami(ntab[0][0], ntab[0][1], ntab[1][0], ntab[1][1]);
	//std::cout << odleglosc;

	delete[] ntab;
	punkt.close();
	return;
}

void Najdalszy_punkt()
{
	std::fstream punkt;

	punkt.open("Qiqson.txt", std::ios::in);
	if (punkt.good() == false)
	{
		std::cout << "Nie uda³o siê otworzyæ pliku :(";
		punkt.close();
		return;
	}

	int R;
	punkt >> R;

	int** ntab = new int* [R];
	for (int i = 0; i < R; i++)
	{
		ntab[i] = new int[2];
	}
	for (int i = 0; i < R; i++)
	{
		punkt >> ntab[i][0];
		punkt >> ntab[i][1];
	}

	double max_val = Odleglosc_pomiedzy_punktami(ntab[0][0], ntab[0][1], ntab[1][0], ntab[1][1]);
	int id[6];
	id[0] = 0;
	id[1] = 1;

	for (int i = 0; i < R; i++)
	{
		for (int j = 1 + i; j < R; j++)
		{
			if (max_val < Odleglosc_pomiedzy_punktami(ntab[i][0], ntab[i][1], ntab[j][0], ntab[j][1]))
			{
				max_val = Odleglosc_pomiedzy_punktami(ntab[i][0], ntab[i][1], ntab[j][0], ntab[j][1]);
				id[0] = i + 2;
				id[1] = j + 2;
				id[2] = ntab[i][0];
				id[3] = ntab[i][1];
				id[4] = ntab[j][0];
				id[5] = ntab[j][1];
			}
		}
	}

	std::cout << "Najwiêksza odleg³oœæ to: " << max_val;
	std::cout << "\nDla punktów X1 = " << id[2] << ", Y1 = " << id[3] << " oraz " << "X2 = " << id[4] << ", Y2 = " << id[5];
	std::cout << "\nW liniach: " << id[0] << " oraz " << id[1];

	//odleglosc = Odleglosc_pomiedzy_punktami(ntab[0][0], ntab[0][1], ntab[1][0], ntab[1][1]);
	//std::cout << odleglosc;

	delete[] ntab;
	punkt.close();
	return;
}