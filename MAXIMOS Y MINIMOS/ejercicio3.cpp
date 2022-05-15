// 3- Dados 5 valores que se ingresan por teclado, mostrar el mayor y la cantidad de veces que fue ingresado

#include <iostream>

using namespace std;

int main()
{
  int num, mayor, cant = 0;

  for (int i = 0; i < 5; i++)
  {
    cout << "Ingresar un numero: ";
    cin >> num;
    if (i == 0 || num > mayor)
    {
      mayor = num;
      cant = 1;
    }
    else if (num == mayor)
      cant++;
  }

  cout << "El mayor numero de los ingresados es: " << mayor << " y se ingreso " << cant << " veces";

  return 0;
}