/* 19- En un Banco se procesan datos de las cuentas corrientes de los clientes. De cada cuenta se
conocen: número de cuenta, nombre del cliente y saldo actual. Se pide escribir un algoritmo que
permita informar por cada cuenta: número y estado (acreedor o deudor). También informar la
cantidad de cuentas con saldo deudor, con saldo acreedor y con saldo nulo. Para fin de datos
ingresar un número de cuenta negativo */

#include <iostream>

using namespace std;

int main()
{
  int numCuenta, saldoActual, cantSaldoAcreedor = 0, cantSaldoDeudor = 0, cantSaldoNulo = 0;
  string nombreCliente, estado;

  cout << "Ingrese los datos de la cuenta" << endl;
  cout << "Numero de cuenta: ";
  cin >> numCuenta;
  cout << "Nombre del cliente: ";
  cin >> nombreCliente;
  cout << "Saldo de cuenta: ";
  cin >> saldoActual;

  return 0;
}