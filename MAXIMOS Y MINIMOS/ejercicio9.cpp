/* 9- Un buque de carga traslada contenedores a tres diferentes puertos del país.
Los puertos se identifican con los números 1, 2 y 3.
De cada contenedor que el buque traslade se registran los siguientes datos:

- Identificación del contenedor
- Peso del contenedor en kg
- Puerto de arribo (un valor de 1 a 3).
El ingreso de datos finaliza con la identificación de un contenedor igual a cero.

Se pide calcular e informar:
a) El peso total que el buque debe trasladar.
b) La identificación del contenedor de mayor peso.
c) La cantidad de contenedores que debe trasladar a cada puerto

*/

#include <iostream>

using namespace std;

int main()
{
  int identificacion, pesoContenedor, puerto, mayorPeso, cantContenedores = 0, contenedorConMayorPeso;
  float pesoTotal = 0;

  cout << "Ingrese la identificacion del contenedor (0 para finalizar): ";
  cin >> identificacion;

  if (identificacion == 0)
    cout << "No hubo ingreso de datos" << endl;

  while (identificacion != 0)
  {
    cout << "Ingrese el peso del contenedor: ";
    cin >> pesoContenedor;

    if (cantContenedores == 0 || pesoContenedor > mayorPeso)
    {
      mayorPeso = pesoContenedor;
      contenedorConMayorPeso = identificacion;
    }

    pesoTotal += pesoContenedor;
    cantContenedores++;

    cout << "Ingrese el puerto de arribo (un valor de 1 a 3): ";
    cin >> puerto;

    cout << "Ingrese la identificacion del contenedor (0 para finalizar): ";
    cin >> identificacion;
  }

  cout << "El peso total que el buque debe trasladar es: " << pesoTotal << " kg" << endl;
  cout << "La identificacion del contenedor de mayor peso es: " << contenedorConMayorPeso << endl;
  cout << "La cantidad de contenedores que debe trasladar a cada puerto es: " << cantContenedores << endl;

  return 0;
}