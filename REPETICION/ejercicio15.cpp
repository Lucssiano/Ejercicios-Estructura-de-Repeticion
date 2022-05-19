/* 15-  Ingresar edades comprendidas entre 18 y 22, e imprimir cuántas veces se ingresó cada una de estas
edades.El lote finaliza con una edad igual a cero. */

#include <iostream>

using namespace std;

int main()
{
  int edad, cant18 = 0, cant19 = 0, cant20 = 0, cant21 = 0, cant22 = 0;

  do
  {
    cout << "Ingrese una edad comprendida entre 18 y 22 ";
    cin >> edad;

    switch (edad)
    {
    case 18:
      cant18++;
      break;
    case 19:
      cant19++;
      break;
    case 20:
      cant20++;
      break;
    case 21:
      cant21++;
      break;
    case 22:
      cant22++;
      break;
    }

  } while (edad != 0 && edad >= 18 && edad <= 22);

  cout << "18 "
       << "se ingreso " << cant18 << " veces" << endl;
  cout << "19 "
       << "se ingreso " << cant19 << " veces" << endl;
  cout << "20 "
       << "se ingreso " << cant20 << " veces" << endl;
  cout << "21 "
       << "se ingreso " << cant21 << " veces" << endl;
  cout << "22 "
       << "se ingreso " << cant22 << " veces" << endl;

  return 0;
}