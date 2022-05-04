/* 2- Ingresar la cantidad de alumnos de un curso. Ingresar por cada alumno el nombre y dos notas. Por
cada alumno informar su nombre y el promedio de sus notas. */

#include <iostream>

using namespace std;

int main()
{
  int alumnos, nota1, nota2;
  string nombreAlumno;
  cout << "Ingresar la cantidad de alumnos del curso ";
  cin >> alumnos;
  for (int i = 0; i < alumnos; i++)
  {
    cout << "Ingresar el nombre del alumno y dos notas ";
    cin >> nombreAlumno >> nota1 >> nota2;
    cout << "El promedio del alumno " << nombreAlumno << " es: " << (nota1 + nota2) / 2 << endl;
  }
}