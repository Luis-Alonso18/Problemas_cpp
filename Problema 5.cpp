/*
Instituto Tecnológico de Tijuana
Departamento de Sistemas y Computación
Ing. Sistemas computacionales
Lenguajes de interfaz
Alonso Villegas Luis Antonio 18212139
*/

#include <iostream>

#include <math.h>

using namespace std;

int main() {
  int x = 2;
  int Resultado;

  for (int z = 1; Resultado <= 1000; z++) {
    Resultado = pow(x, z);
    if (Resultado <= 1000) {
      cout << x << "^" << z << " = " << Resultado << endl;
    } else
      break;
  }
}