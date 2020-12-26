#include "stdafx.h"
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include <Windows.h>
#include <iomanip>

using namespace std;
using namespace System;

void generavalores(int *matriz2014, int *matriz2015)
{
	Random r; for (int i = 0; i < 12; i++)
	{
		matriz2014[i] = r.Next(0, 31);
		matriz2015[i] = r.Next(0, 31);
	}
}


void imprimebarras(int *cesar, int año, int posicx, int posiciony)
{
	Console::SetCursorPosition(posicx, posiciony);
	cout << "ventas del año" << año<< endl;
	for (int i = 0; i < 12; i++)
	{
		posiciony++;
		Console::SetCursorPosition(posicx, posiciony);
		for (int j = 0; j < cesar[i]; j++)//para cada año
			cout << "*";
		cout << "(" << cesar[i] << ")";


	}

}


void mayorventa(int *matriz2014, int *matriz2015)
{
	float suma2014 = 0, suma2015 = 0;
	int mayor2014 = matriz2014[0], mayor2015 = matriz2015[0];
	for (int i = 0; i < 12; i++)
	{
		suma2014 += matriz2014[i];
		if (mayor2014 < matriz2014[i])mayor2014 = matriz2014[i];
		suma2015 += matriz2015[i];
		if (mayor2015 < matriz2015[i])mayor2015 = matriz2015[i];
	}

	if (mayor2014 > mayor2015)cout << "el mes con mayor venta fue en el 2014" << endl;
	if (mayor2015 > mayor2014)cout << "el mes con mayor venta fue en el 2015" << endl;
	if (suma2014 > suma2015)cout << "el año con mayor venta fue en el 2014" << endl;
	if (suma2015 > suma2014)cout << "el año con mayor venta fue en el 2015" << endl;
}




int main()
{
	int x2014; cout << "pos x barra2014"; cin >> x2014;
	int y2014; cout << "pos y barra2014"; cin >> y2014;
	int x2015; cout << "pos x barra2015"; cin >> x2015;
	int y2015; cout << "pos y barra2015"; cin >> y2015;
	int *matriz2014;
	matriz2014 = new int[12];
	
	int *matriz2015;
	matriz2015 = new int[12];
	
	generavalores(matriz2014, matriz2015);
	imprimebarras(matriz2014,2014, x2014, y2014);
	imprimebarras(matriz2014,2015, x2015, y2015);
	mayorventa(matriz2014, matriz2015);
	
	delete[]matriz2014;
	delete[]matriz2015;

	_getch();

}

