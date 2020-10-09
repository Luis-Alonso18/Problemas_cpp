/*
Instituto Tecnológico de Tijuana
Departamento de Sistemas y Computación
Ing. Sistemas computacionales
Lenguajes de interfaz
Alonso Villegas Luis Antonio 18212139

3.Imprimir los numeros enteros pares del 2 al 48
*/
#include <iostream>

using namespace std;

int main() {
  for (int x = 2; x <= 48; x++) {
    if (x % 2 == 0) {
      cout << x << endl;
    }

  }
}
