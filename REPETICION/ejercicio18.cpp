/* 18- Ingresar por teclado el nombre de un alumno, y a continuación la calificación que obtuvo para
cada materia rendida (hasta ingresar una calificación cero) por cada alumno de los 25 del curso.
Informar por cada alumno nombre y su promedio. */

#include <iostream>

using namespace std;

int main()
{
  int nota, cantAlum = 5;
  string nombre;
  float prom = 0;

  while (cantAlum > 0)
  {
    int sumaNotas = 0, cantMaterias = 0;
    cout << "Ingrese el nombre del alumno ";
    cin >> nombre;

    do
    {
      cout << "Ingrese la nota que obtuvo en la materia ";
      cin >> nota;
      if (nota != 0)
      {
        cantMaterias++;
        sumaNotas += nota;
      }
      else
        prom = (float)sumaNotas / cantMaterias;
    } while (nota != 0);

    cout << "El alumno " << nombre << " tiene un promedio de " << prom << endl;
    cantAlum--;
  }
  return 0;
}