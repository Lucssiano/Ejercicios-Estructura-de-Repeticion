/* 6- Hacer un algoritmo que ingrese por teclado un número entero n y a continuación ingrese n
números más de los que tendrá que informar su promedio. */

#include <iostream>

using namespace std;

int main()
{
  int i, sumaNums = 0;
  float prom, numsAPromediar, n;

  cout << "Ingrese un numero entero: ";
  cin >> n;

  while (i < n)
  {
    cout << "Ingrese un numero a promediar: ";
    cin >> numsAPromediar;
    i++;
    sumaNums = sumaNums + numsAPromediar;
  }

  prom = sumaNums / n;

  cout << "Promedio de los numeros enteros ingresados: " << prom;

  return 0;
}