// 2- Dados 5 valores distintos que se ingresan por teclado, mostrar en qué posición se ingresó el mayor.

#include <iostream>

using namespace std;

int main()
{
  int num, mayor, posicion;

  for (int i = 0; i < 5; i++)
  {
    cout << "Ingresar un numero: ";
    cin >> num;
    if (i == 0 || num > mayor)
    {
      mayor = num;
      posicion = i;
    }
  }

  cout << "El mayor numero de los ingresados es: " << mayor << " y se ingreso en la posicion " << posicion;

  return 0;
}