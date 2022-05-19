/* 17- Dado un conjunto de triángulos representados por sus lados lado1, lado2 y lado3 dados como
datos, determinar e imprimir la cantidad de triángulos equiláteros, isósceles y escalenos. El
ingreso de datos finaliza cuando un lado es nulo. */

#include <iostream>

using namespace std;

int main()
{
  int cantEq = 0, cantIs = 0, cantEs = 0;
  float lado1, lado2, lado3;

  do
  {
    cout << "Ingrese tres lados de un triangulo ";
    cin >> lado1 >> lado2 >> lado3;

    if (lado1 != 0 && lado2 != 0 && lado3 != 0)
    {
      // Isosceles considerando que lado 1 y lado 2 son los de la izquierda y derecha del triángulo
      if (lado1 == lado2 && lado1 != lado3)
      {
        cout << "El triangulo es isosceles" << endl;
        cantIs++;
      }
      else if (lado1 == lado2 && lado1 == lado3)
      {
        cout << "El triangulo es equilatero" << endl;
        cantEq++;
      }
      else
      {
        cout << "El triangulo es escaleno" << endl;
        cantEs++;
      }
    }
  } while (lado1 != 0 && lado2 != 0 && lado3 != 0);

  cout << "Hay " << cantIs << " triangulos isosceles" << endl;
  cout << "Hay " << cantEq << " triangulos equilateros" << endl;
  cout << "Hay " << cantEs << " triangulos escalenos" << endl;

  return 0;
}