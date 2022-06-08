/* 6- Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que finaliza con un Nombre = ‘FIN’,
informar el nombre de la persona con mayor edad y el de la más joven. */

// Problema con fechas como 06

#include <iostream>

using namespace std;

int main()
{
  int edad, mayorEdad, menorEdad;
  bool pri = true;
  string nombre, personaConMayorEdad, personaConMenorEdad;

  cout << "Ingrese un nombre (fin para terminar): ";
  cin >> nombre;

  while (nombre != "fin")
  {
    cout << "Ingrese una fecha de nacimiento en formato AAAAMMDD: ";
    cin >> edad;

    if (pri)
    {
      mayorEdad = edad;
      menorEdad = edad;
      personaConMayorEdad = nombre;
      personaConMenorEdad = nombre;
      pri = false;
    }
    else
    {
      if (edad > mayorEdad)
      {
        mayorEdad = edad;
        personaConMayorEdad = nombre;
      }
      else
      {
        if (edad < menorEdad)
        {
          menorEdad = edad;
          personaConMenorEdad = nombre;
        }
      }
    }
    cout << "Ingrese un nombre (fin para terminar): ";
    cin >> nombre;
  }

  cout << "La persona con menor edad es: " << personaConMenorEdad << endl;
  cout << "La persona con mayor edad es: " << personaConMayorEdad << endl;

  return 0;
}