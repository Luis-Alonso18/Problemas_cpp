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
    @  Imprimir una tabla de potencias del 2 que no exceda al 1,000
    @
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
