/*  @@
    @@ Instituto Tecnologico de Tijuana
    @@ Depto de Sistemas y Computación
    @@ Ing. En Sistemas Computacionales
    @@   
    @@ Autor : Alonso Villegas Luis Antonio @nickname Luis-Alonso18
    @@ Repositorio: http://github.com/tectijuana/Problemas_cpp
    @@ Fecha de revisión: 20/10/2020
    @@ 
    @
    @ Objetivo del programa:
    @  Imprimir los numeros enteros pares del 2 al 48
    @
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
