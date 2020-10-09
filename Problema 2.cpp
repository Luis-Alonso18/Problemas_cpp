/*
Instituto Tecnológico de Tijuana
Departamento de Sistemas y Computación
Ing. Sistemas computacionales
Lenguajes de interfaz
Alonso Villegas Luis Antonio 18212139
*/
#include <iostream>

using namespace std;

int main() {
  for (int x = 7; x <= 51; x++) {
    int contador = 0;
    for (int y = 1; y <= x; y++) {

      if (x % y == 0) {
        contador = contador + 1;
      }
    }
    if (contador == 2) {
      cout << x << endl;
    }
  }
}