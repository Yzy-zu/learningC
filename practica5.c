/*
Practica 5 Tamaño de Char
signed char va de: -128 a 127
unsigned char va de: 0 a 255

Definimos dos variables, la primera signed = 130
la segunda unsigned = 130

El resultado que nos arroja al compilar es el siguiente:

Con signo (%d): -126
Sin signo (%u): 130

Por que? Recordemos el tamaño que ofrece signed y unsigned
La primera es signed, rebasa el tamaño (127) con nuestro valor (130), al pasar esto tenemos que continuar con en los valores del lado
contrario de nuestro signed char:
127(127)
128(-128)
129(-127)
130(-126)

Con unsigned no hay problema, recordemos que va de 0 a 255, por lo que nuestro 130 cabe bastante bien

*/
#include <stdio.h>

int main(){
    char signo = 130;
    unsigned char ssigno = 130;
    
    printf("Con signo (%%d): %d\n", signo);
    printf("Sin signo (%%u): %u\n", ssigno);
    
    return 0;
}