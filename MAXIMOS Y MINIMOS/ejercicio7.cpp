/* 7- Un jugador arroja 5 dados y se registra como puntaje la suma de los dos valores más altos. Dada
una serie de tiros, que finaliza al ingresar ‘N’ ante la consulta “Continúa? S/N”, determinar e
imprimir la cantidad de tiros, el máximo puntaje obtenido, y el puntaje promedio. */

#include <iostream>

using namespace std;

int main()
{
  int cantTiros = 0, maxPuntaje = 0, sumaPuntajes = 0;
  float puntajeProm = 0;
  string continua;

  do
  {
    int dado, mayorValor1, mayorValor2, maxPuntajeActual;

    for (int i = 0; i < 5; i++)
    {
      cout << "Ingrese el valor del dado arrojado: ";
      cin >> dado;
      if (i == 0)
      {
        mayorValor1 = dado;
        mayorValor2 = dado;
      }
      else
      {
        if (dado > mayorValor1)
        {
          mayorValor2 = mayorValor1;
          mayorValor1 = dado;
        }
        else
        {
          if (dado > mayorValor2)
            mayorValor2 = dado;
        }
      }

      cout << mayorValor1 << " " << mayorValor2 << endl;
    }

    maxPuntajeActual = mayorValor1 + mayorValor2;
    sumaPuntajes += maxPuntajeActual;

    if (cantTiros == 0 || maxPuntajeActual > maxPuntaje)
      maxPuntaje = maxPuntajeActual;

    cantTiros++;

    cout << "Continua? S/N ";
    cin >> continua;
  } while (continua != "N");

  puntajeProm = (float)sumaPuntajes / cantTiros;

  cout << "Se realizaron " << cantTiros << " tiros" << endl;
  cout << "El maximo puntaje obtenido fue: " << maxPuntaje << endl;
  cout << "El puntaje promedio es " << puntajeProm << " tiros" << endl;

  return 0;
}