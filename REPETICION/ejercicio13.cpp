/* 13- Hacer un algoritmo que calcule el promedio de números enteros positivos ingresados por teclado
hasta que se ingrese un cero. Este cero sólo indica el fin de ingreso de datos, no se incluirá en el
promedio. */

#include <iostream>

using namespace std;

int main()
{
  int n, sumNum = 0, cantNum = 0;
  float prom;

  cout << "Ingrese un numero entero positivo ";
  cin >> n;

  while (n != 0)
  {
    sumNum += n;
    cantNum++;
    cout << "Ingrese un numero entero positivo ";
    cin >> n;
  }

  if (cantNum != 0)
  {
    prom = (float)sumNum / cantNum;
    cout << "El promedio de los numeros enteros positivos ingresados por teclado es: " << prom;
  }
  else
    cout << "No hubo numeros, cero fue el primero" << endl;

  return 0;
}