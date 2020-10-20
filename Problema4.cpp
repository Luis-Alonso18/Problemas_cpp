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
    @  Imprimir los numeros enteros del 1 al 30, apareados con sus recíprocos
    @
*/

#include <iostream>

using namespace std;

int main() {
  for (int x = 1; x <= 30; x++) {
    cout << "Número: " << x << "; Recíproco: " << 1 << "/" << x << endl;
  }
}
