/*
Instituto Tecnológico de Tijuana
Departamento de Sistemas y Computación
Ing. Sistemas computacionales
Lenguajes de interfaz
Alonso Villegas Luis Antonio 18212139

4.Imprimir los numeros enteros del 1 al 30, apareados con sus recíprocos
*/
#include <iostream>

using namespace std;

int main() {
  for (double x = 1; x <= 30; x++) {
    cout << "Número: " << x << "; Recíproco: " << 1 << "/" << x << endl;
  }
}
