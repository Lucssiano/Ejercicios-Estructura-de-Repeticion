// 4- Informar la cantidad de números negativos que hay dentro de 20 números ingresados por teclado.

#include <iostream>

using namespace std;

int main()
{
  int num, i, contNumNeg = 0;

  while (i < 20)
  {
    cout << "Ingrese un numero: ";
    cin >> num;
    i++;
    if (num < 0)
      contNumNeg++;
  }

  cout << "Cantidad de numeros negativos: " << contNumNeg;
}