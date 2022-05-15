/* 13- Hacer un algoritmo que calcule el promedio de números enteros positivos ingresados por teclado
hasta que se ingrese un cero. Este cero sólo indica el fin de ingreso de datos, no se incluirá en el
promedio. */

#include <iostream>

using namespace std;

int main()
{
  int n = 0, sumNum = 0, cantNum = 0;
  float prom;

  do
  {
    cout << "Ingrese un numero entero positivo ";
    cin >> n;
    sumNum += n;
    if (n != 0) // No me convence
      cantNum++;
  } while (n > 0);

  prom = (float)sumNum / cantNum;

  cout << "El promedio de los numeros enteros positivos ingresados por teclado es: " << prom;

  return 0;
}