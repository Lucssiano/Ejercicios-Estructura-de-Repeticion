// 5- Calcular e informar la sumatoria de 10 números ingresados por teclado.

#include <iostream>

using namespace std;

int main()
{
  int num, i, sumaNums = 0;

  while (i < 10)
  {
    cout << "Ingrese un numero: ";
    cin >> num;
    i++;
    sumaNums = sumaNums + num;
  }

  cout << "Sumatoria de los numeros ingresados: " << sumaNums;
}