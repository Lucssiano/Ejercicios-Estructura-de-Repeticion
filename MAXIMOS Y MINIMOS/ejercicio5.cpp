/* 5- Dado un conjunto de valores, que finaliza con un valor nulo, determinar e imprimir (si hubo
valores):
a) El valor máximo negativo
b) El valor mínimo positivo
d) El promedio de todos los valores. */

#include <iostream>

using namespace std;

int main()
{
  int num, maxNeg, minPos, cantValores = 0, sumaDeValores = 0;
  float prom;

  do
  {
    cout << "Ingresar un numero: ";
    cin >> num;

    sumaDeValores += num;

    if (num != 0)
      cantValores++;

    cout << cantValores << " CANT VALORES" << endl;

    if (num < 0)
    {
      if (maxNeg > num)
        maxNeg = num;
    }
    else
    {
      if (num > 0)
      {
        if (minPos > num)
          minPos = num;
      }
    }
  } while (num != 0);

  cout << sumaDeValores << " SUMA VALORES" << endl;

  prom = (float)sumaDeValores / cantValores;

  cout << "El valor maximo negativo es: " << maxNeg << endl;
  cout << "El valor minimo positivo es: " << minPos << endl;
  cout << "El promedio de todos los valores es: " << prom;

  return 0;
}