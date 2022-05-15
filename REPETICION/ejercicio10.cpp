/* 10- En un torneo de fútbol participan K equipos. El torneo se juega con el sistema de todos contra todos.
Por cada partido disputado por un equipo se dispone de la siguiente información :
a) Nombre del equipo,
b) Código del resultado ('P'= Perdido, 'E'= Empatado, 'G'= Ganado).
Se arma un lote de datos con todos los resultados del torneo, agrupados por nombre del equipo.
Desarrollar el programa que imprima:
Por cada equipo, su nombre y el puntaje total que obtuvo (suma 3 si gana, y 1 si empata). */

#include <iostream>

using namespace std;

int main()
{

  int k, puntos, puntajeTotal;
  string nombEquipo;
  char cod;

  cout << "Indique la cantidad de equipos que participan del torneo de futbol ";
  cin >> k;

  for (int i = 0; i < k; i++)
  {
    cout << "Ingrese el nombre del equipo ";
    cin >> nombEquipo;

    puntajeTotal = 0;

    for (int i = 0; i < k; i++)
    {
      cout << "Ingrese el codigo del resultado del partido ";
      cin >> cod;

      switch (cod)
      {
      case 'G':
      case 'g':
        puntos = 3;
        break;
      case 'E':
      case 'e':
        puntos = 1;
        break;
      case 'P':
      case 'p':
        puntos = 0;
        break;
      }
      puntajeTotal += puntos;
    }
    cout << nombEquipo << " obtuvo " << puntajeTotal << " puntos" << endl;
  }

  return 0;
}