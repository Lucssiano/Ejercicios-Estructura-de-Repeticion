// 12- Dado un número entero positivo informar su factorial

#include <iostream>

using namespace std;

int main()
{
  int n;
  unsigned factorial = 1;
  cout << "Ingrese un numero entero positivo ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    factorial *= i;
  }

  cout << "El factorial de " << n << " es: " << factorial;

  return 0;
}