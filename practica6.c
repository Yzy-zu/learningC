/*
Practica 6 Desplazamiento de Bits

Un numero es un conjunto de bits, en binario el 5 es:
0 0 0 0 0 1 0 1

El operador de desplazamiento >> o << permiten mover todos los bits a la direccion que indicamos
si desplazamos los bits a la izq quedaria:
0 0 0 1 0 1 0 0
dando como resultado: 10

si desplazamos los bits a la der quedaria:
0 0 0 0 0 0 0 1
dando como resultado : 2
*/


#include <stdio.h>

int main() {
    int numero = 5;

    int izq = numero << 2;
    int der = numero >> 2;

    printf("El numero original es: %d\n", numero);
    printf("El numero desplazado a la izq dio: %d\n", izq);
    printf("El numero desplazado a la der dio: %d\n", der);

    return 0;

}