/* 14- Desarrollar un algoritmo que permita ingresar un conjunto de valores, cada uno de los cuales
representa el sueldo de un empleado (se sabe que un sueldo igual a 0 indica el fin del conjunto), e
informe:
a) Cuántos empleados ganan menos de $900
b) Cuántos ganan $900 o más, pero menos de $1200
c) Cuántos ganan $1200 o más, pero menos de $2000
d) Cuántos ganan $2000 o más. */

#include <iostream>

using namespace std;

int main()
{
  int a = 0, b = 0, c = 0, d = 0;
  unsigned sueldo;
  do
  {
    cout << "Ingrese el sueldo del empleado: ";
    cin >> sueldo;
    if (sueldo < 900 && sueldo != 0)
      a++;
    if (sueldo >= 900 && sueldo < 1200)
      b++;
    if (sueldo >= 1200 && sueldo < 2000)
      c++;
    if (sueldo >= 2000)
      d++;
  } while (sueldo != 0);

  cout << a << " empleados ganan menos de $900" << endl;
  cout << b << " empleados ganan $900 o mas, pero menos de $1200" << endl;
  cout << c << " empleados ganan $1200 o mas, pero menos de $2000" << endl;
  cout << d << " empleados ganan $2000 o mas" << endl;

  return 0;
}