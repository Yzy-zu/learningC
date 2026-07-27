//practica 4 DEsbordamiento Overflow
/*
Que pasa si intentamos meter un valor mas grande en una caja que tiene un tamaño fijo?
Aqui veremos que char almacena valores de 0 al 255(256) si es positivo, entonces que pasa
si definimos una variable con un valor de 300?




lo que sucedera es que al no tener espacio suficiente, la variable hara movimiento de reloj, llenando todo el espacio
y luego volver a llenarse hasta donde se cumpla nuestra variable, que seria algo como esto:
char(256)
variable(300)
300-256=44
Al empezar de nuevo, la variable se llena y almacena hasta donde se cumple lo que definimos, lo que sobro*/
#include <stdio.h>

int main() {
    char prueba = 300;
    printf("el experimento con 300 dio: %d\n", prueba);
    return 0;
}