/* 6- Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que finaliza con un Nombre = ‘FIN’,
informar el nombre de la persona con mayor edad y el de la más joven. */

// Problema con fechas como 06

#include <iostream>

using namespace std;

int main()
{
  int dia, mes, año, sumaFecha = 0, mayorEdad, menorEdad, i;
  string nombre, personaConMayorEdad, personaConMenorEdad;

  do
  {
    cout << "Ingrese un nombre: ";
    cin >> nombre;
    cout << "Ingrese una fecha en formato AAAA/MM/DD: ";
    cin >> año >> mes >> dia;
    sumaFecha = (año * 10000) + (mes * 100) + dia;

    if (i == 0)
    {
      mayorEdad = sumaFecha;
      menorEdad = sumaFecha;
    }
    else
    {
      if (mayorEdad < sumaFecha)
      {
        mayorEdad = sumaFecha;
        personaConMayorEdad = nombre;
      }
      else
      {
        if (menorEdad > sumaFecha)
        {
          menorEdad = sumaFecha;
          personaConMenorEdad = nombre;
        }
      }
    }

  } while (nombre != "fin");

  cout << "La persona con menor edad es: " << personaConMenorEdad << endl;
  cout << "La persona con mayor edad es: " << personaConMayorEdad << endl;
}

// Parecido al 6 de DECISION