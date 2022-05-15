// 9- Dados 50 números enteros, informar el promedio de los mayores que 100 y la suma de los menores que –10.

#include <iostream>

using namespace std;

int main()
{
  int i = 5, num, cantNumMayorA100 = 0, sumaMayorA100 = 0, sumMenorQue10 = 0;
  float prom = 0;
  while (i > 0)
  {
    cout << "Ingrese un numero entero: ";
    cin >> num;
    i--;
    if (num > 100)
    {
      cantNumMayorA100++;
      sumaMayorA100 += num;
    }
    if (num < -10)
      sumMenorQue10 += num;
  }

  prom = (float)sumaMayorA100 / cantNumMayorA100;

  cout << "El promedio de los numeros mayores que 100 es: " << prom << endl;
  cout << "La suma de los numeros menores que -10 es: " << sumMenorQue10;

  return 0;
}