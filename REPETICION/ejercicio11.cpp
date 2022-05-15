// 11- Dados n y m enteros positivos, informar su producto obtenido por sumas sucesivas.

#include <iostream>

using namespace std;

int main()
{
  int n, m, producto = 0;
  cout << "Ingrese dos numeros enteros positivos ";
  cin >> n >> m;

  for (int i = 0; i < m; i++)
  {
    producto += n;
  }

  cout << "El producto por sumas sucesivas de " << n << "x" << m << " es: " << producto;

  return 0;
}