/*
ejercicio 1 hoja 6 bidimensionales
*/
#include<iostream>
#include<stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;

void GenerarDatos(int **Anio2014, int **Anio2015)
{
	cout << "Generando datos aleatorios " << endl;
	srand(time(NULL));
	for (int j = 0; j < 12; j++)
	{
		Anio2014[0][j] = j + 1;
		Anio2014[1][j] = rand() % 30;
		Anio2015[0][j] = j + 1;
		Anio2015[1][j] = rand() % 30;
	}

}
void ImprimirDatos(int **Matriz)
{
	cout << endl << " MESES DEL AÑO " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j< 12; j++)
			cout << Matriz[i][j] << " ";
		cout << endl;
	}
}
void Graficar(int **Matriz)
{
	cout << endl<< "Grafico" << endl;
	int k=0;
	for (int i = 0; i < 12; i++)
	{
		k = Matriz[1][i];
		for (int m = 1; m <= k; m++)
			cout << "#";
		cout <<k<< endl;
	}
}
int main()
{
	int **Anio2014, **Anio2015;
	Anio2014 = new int *[2];
	for (int i = 0; i<2; i++)
		Anio2014[i] = new int[12];
	Anio2015 = new int *[2];
	for (int i = 0; i<2; i++)
		Anio2015[i] = new int[12];

	GenerarDatos(Anio2014, Anio2015);

	ImprimirDatos(Anio2014);
	ImprimirDatos(Anio2015);

	Graficar(Anio2014);
	Graficar(Anio2015);

	for (int i = 0; i<2; i++)
		delete[] Anio2014[i];
	delete[] Anio2014;

	for (int i = 0; i<2; i++)
		delete[] Anio2015[i];
	delete[] Anio2015;
	_getch();

}
