#include <stdio.h>

int main(){
    char letrita = 'G';
    int edad = 43;
    float altura = 1.38f;

    printf("la letra guardada es: %c\n", letrita);
    printf("El numero guardado es: %d\n", edad);
    printf("la altura es de: %f\n", altura);

    printf("tamaño en la ram\n");
    printf("el char ocupa: %zu byte(s)\n", sizeof(letrita));
    printf("el int ocupa: %zu byte(s)\n", sizeof(edad));
    printf("el decimal ocupa %zu byte(s)", sizeof(altura));
    return 0;

}