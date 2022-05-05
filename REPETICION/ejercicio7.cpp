/* 7- Ingresar la cantidad de alumnos de un curso. Ingresar por cada alumno el nombre y una nota. Por
cada alumno informar su nombre y si está aprobado o desaprobado. Informar también el
porcentaje de alumnos aprobados y la cantidad de desaprobados */

// Considero aprobado desde el 6

#include <iostream>

using namespace std;

int main()
{
  int cantAlum, nota, cantAlumsAprobados = 0, cantAlumsDesaprobados = 0;
  float porcentajeAlumsAprobados;
  string alumno, situacion;

  cout << "Ingrese la cantidad de alumnos del curso: ";
  cin >> cantAlum;

  for (int i = 0; i < cantAlum; i++)
  {
    cout << "Ingrese el nombre de un alumno y su nota: ";
    cin >> alumno >> nota;

    if (nota >= 6)
    {
      situacion = "aprueba";
      cantAlumsAprobados++;
    }
    else
    {
      situacion = "desaprueba";
      cantAlumsDesaprobados++;
    }

    cout << "El alumno " << alumno << " " << situacion << " con una nota de: " << nota << endl;
  }

  porcentajeAlumsAprobados = (float(cantAlumsAprobados) * 100) / cantAlum;
  cout << "El porcentaje de alumnos aprobados es del " << porcentajeAlumsAprobados << "%" << endl;

  cout << "La cantidad de desaprobados es de " << cantAlumsDesaprobados << " alumno/s";

  return 0;
}