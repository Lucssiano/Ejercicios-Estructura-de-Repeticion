// 1- Ingresar 10 números por teclado y mostrar sólo los positivos.

#include <iostream>

using namespace std;

int main()
{
  int nro;
  for (int i = 1; i < 10; i++)
  {
    cout << "Ingrese el numero de orden " << i << endl;
    cin >> nro;
    if (nro > 0)
      cout << "Numero positivo: " << nro << endl;
  }
}