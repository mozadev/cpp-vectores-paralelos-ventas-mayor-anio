#include "stdafx.h"
#include <iostream>
#include "conio.h"
 
using namespace System;
using namespace std;
 
void GeneraVectores(int V2014[], int V2015[])
{
       Random f;
       for (int i = 0; i<12; i++)
       {
             V2014[i] = f.Next(0, 31);
             V2015[i] = f.Next(0, 31);
       }
}
void ImprimeBarras(int VVentas[], int año, int x, int y)
{
       Console::SetCursorPosition(x, y);
       cout << " ventas del año " << año << endl;
       for (int i = 0; i<12; i++)
       {
             y++;
             Console::SetCursorPosition(x, y);
             for (int ncar = 1; ncar <= VVentas[i]; ncar++)
                    cout << "*";
             cout << " (" << VVentas[i] << ")";
 
       }
}
 
void MayorVenta(int V2014[], int V2015[])
{
       int max2014 = V2014[0];
       int max2015 = V2015[0];
       for (int i = 1; i<12; i++)
       {
             if (max2014<V2014[i]) max2014 = V2014[i];
             if (max2015<V2015[i]) max2015 = V2015[i];
       }
       if (max2014>max2015) cout << "El año donde se realizo la mayor venta fue 2014";
       if (max2014<max2015) cout << "El año donde se realizo la mayor venta fue 2015";
}
int main(array<System::String ^> ^args)
{
       int * A2014 = new int[12];
       int * A2015 = new int[12];
       GeneraVectores(A2014, A2015);
       ImprimeBarras(A2014, 2014, 0, 0);
       ImprimeBarras(A2015, 2015, 40, 0);
       MayorVenta(A2014, A2015);
       _getch();
       return 0;
}