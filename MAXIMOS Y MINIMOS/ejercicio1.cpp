// 1- Dados 5 valores distintos que se ingresan por teclado, mostrar el menor

#include <iostream>

using namespace std;

int main()
{
  int num, i = 0, menor;

  do
  {
    cout << "Ingresar un numero: ";
    cin >> num;
    i++;
    if (i == 0 || num < menor)
      menor = num;
  } while (i < 5);

  cout << "El menor numero de los ingresados es: " << menor;

  return 0;
}