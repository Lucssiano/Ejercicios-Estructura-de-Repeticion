/* 16- Hacer un algoritmo que calcule e informe el factorial de números positivos ingresados por teclado.
El lote de números finaliza con cero. */

#include <iostream>

using namespace std;

int main()
{
  int n;
  unsigned factorial;

  do
  {
    cout << "Ingrese un numero entero positivo ";
    cin >> n;

    if (n != 0)
    {
      factorial = 1;
      for (int i = 1; i <= n; i++)
      {
        // cout << factorial << endl;
        factorial *= i;
      }

      cout << "El factorial de " << n << " es " << factorial << endl;
    }
  } while (n > 0);

  return 0;
}