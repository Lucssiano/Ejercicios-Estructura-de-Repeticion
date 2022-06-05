// 8- Dado un número entero positivo entre 1 y 3999 informar su correspondiente número Romano

#include <iostream>

using namespace std;

int main()
{
  int num;

  cout << "Ingrese un numero entero positivo entre 1 y 3999: ";
  cin >> num;

  while (num >= 1 && num <= 3999)
  {

    cout << "Ingrese un numero entero positivo entre 1 y 3999: ";
    cin >> num;
  }

  return 0;
}