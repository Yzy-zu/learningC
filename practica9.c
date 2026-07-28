#include <stdio.h>

int main() {
    unsigned char wifi = 1;
    unsigned char blutu = 2;
    unsigned char nfc = 4;

    unsigned char hardware = 0;
    printf("el valor del hardware1 es: %d\n\n", hardware);
    hardware = hardware | wifi;
    hardware = hardware | nfc;
    
    printf("testing de hardware...\n");
    printf("el valor del hardware es: %d\n\n", hardware);

    if ((hardware & wifi) != 0) {
        printf("El wifi esta prendido\n");
    } else {
        printf("EL wifi esta apagado\n");
    }
    if ((hardware & nfc) != 0) {
        printf("El nfc esta prendido\n");
    } else {
        printf("el nfc esta apagado\n");
    }
    hardware = hardware & ~wifi;
    printf("Intento 2 cargando...\n");
    if ((hardware & wifi) != 0) {
        printf("el wifi sigue prendido!\n");
    } else {
        printf("el wifi se apago:v\n");
    }
    return 0;
}