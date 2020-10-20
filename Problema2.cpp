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
    @   Imprimir los numeros enteros impares del 7 al 51
    @
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
