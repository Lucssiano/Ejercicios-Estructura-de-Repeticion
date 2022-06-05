// 4- Dados 5 valores distintos que se ingresan por teclado, mostrar los dos mayores.

#include <iostream>

using namespace std;

int main()
{
  int num, mayor1, mayor2;

  for (int i = 0; i < 5; i++)
  {
    cout << "Ingresar un numero: ";
    cin >> num;
    if (i == 0)
    {
      mayor1 = num;
      mayor2 = num;
    }
    else
    {
      if (num > mayor1)
      {
        mayor2 = mayor1;
        mayor1 = num;
      }
      else
      {
        if (num > mayor2)
          mayor2 = num;
      }
    }
  }

  cout << "Los dos numeros mayores de los ingresados son: " << mayor1 << " y  " << mayor2;
  return 0;
}