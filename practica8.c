/*
PRactica 8 TIPOS DEDATOSSSS

Un int no es lo mismo que un float
un int es un valor entero y un float contiene decimales
si declaramos una variable con el tipo de dato int almacenando un float, al compilar
se recortara la mantisa o fraccion del numero, el mismo compilador nos dara la advertencia si colocamos
la bandera adecuada

si eso es realmente lo que queremos hacer por el motivo que sea, se hace casting
que consiste en colocar el tipo que queremos en la variable donde declaramos el nuevo y donde se almacena dicho dato
*/

#include <stdio.h>

int main(){
    float numero = 34.2f;
    int resultado = (int)numero;
    printf("el resultado es: %d\n", resultado);
    return 0;
}