//#include <iostream>
//#include <conio.h>
//using namespace std;
//using namespace System;
//void GeneraVectores(int * A2014, int *A2015)
//{
//	Random r;
//	for (int i = 0; i < 12; i++)
//	{
//		A2014[i] = r.Next(0, 31);
//	}
//	for (int i = 0; i < 12; i++)
//	{
//		A2015[i] = r.Next(0, 31);
//	}
//
//}
//void ImprimeBarras(int * vector)
//{
//	for (int i = 0; i < 12; i++)//POR CADA MES
//	{
//		for (int j = 0; j < vector[i]; j++)
//		{
//			cout << "#";
//		}
//		cout << "(" << vector[i]<<")";
//		cout << "\n";
//	}
//	cout << "-------------------------------\n";
//}
//void MayorVenta(int * A2014, int *A2015){
//	int suma2014 = 0;
//	int suma2015 = 0;
//	for (int i = 0; i < 12; i++)
//	{
//		suma2014 += A2014[i];
//		suma2015 += A2015[i];
//	}
//	if (suma2014 > suma2015)
//		cout << "Se vendio mas en 2014";
//	else if (suma2014 < suma2015)
//			cout << "Se vendio mas en 2015";
//	else
//		cout << "Se vendio lo mismo en ambos anios";
//}
//int main()
//{
//	int * A2014 = new int[12];
//	int * A2015 = new int[12];
//	GeneraVectores(A2014,A2015);
//	cout << "Anio 2014\n";
//	ImprimeBarras(A2014);
//	cout << "Anio 2015\n";
//	ImprimeBarras(A2015);
//	MayorVenta(A2014, A2015);
//	getch();
//	return 0;
//}