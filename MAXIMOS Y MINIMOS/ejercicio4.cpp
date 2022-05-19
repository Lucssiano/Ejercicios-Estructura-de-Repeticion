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
      cout << mayor1 << " mayor1 " << num << endl;
      cout << mayor2 << " mayor2 " << num << endl;
    }
    if (num > mayor1)
    {
      mayor1 = num;
      cout << mayor1 << " mayor1 " << num << endl;
    }
    else
    {
      if (num > mayor2)
      {
        mayor2 = num;
        cout << mayor2 << " mayor2 " << num << endl;
      }
    }
  }

  cout << "Los dos numeros mayores de los ingresados son: " << mayor1 << " y  " << mayor2;
  return 0;
}