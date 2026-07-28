/*
PRACTICA 7 PIla de platos

aqui tenemos un ejemplo de un Stack(pila)
cuando ejecutamos el programa, este se queda en el fondo corriendo, si llamamos una funcion
se superpone arriba de main. Pensemos en una torre de platos, el primer plato que lavamos es el que queda en el fondo
los siguientes que se vayan lavando van a ir uno tras otro arriba de los demas hasta tener una torre 

en este caso cuando iniciamos, main queda al fondo, si llamamos una funcion mandandole un valor de main, esta toma una copia
y trabaja con el, realiza su funcion y da el resultado. Si la funcion termina, los datos que trabajo se mueren, desaparecen, como 
si hubieramos tomado el plato de hasta arriba y tiraramos al piso

por lo que main no sufre cambios con sus variables, es decir "numero" sigue valiendo 20 aun usando 30 funciones como 
la que tenemos abajo
*/
#include <stdio.h>

void duplicar(int x) {
    x = x * 2;
    printf("El resultado dentro de la funcion duplciar es: %d\n", x);
}

int main() {
    int numero = 20;
    printf("El numero sin llamar a la funcion vale: %d\n", numero);
    
    duplicar(numero);

    printf("El numero despues de usar la funcion es: %d\n", numero);
    
    return 0;
}