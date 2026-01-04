#include <stdio.h>
#include <string.h>


struct CPU {
    char modelo[50];
    int temperatura;
    float clock;
};

void overclock (struct CPU *ptr_cpu);

int main () {
    struct CPU ryzen9;
    strcpy(ryzen9.modelo, "Ryzen 9");
    ryzen9.temperatura = 70;
    ryzen9.clock = 3.5;


    overclock(&ryzen9);
    overclock(&ryzen9);

    
    return 0;
}

void overclock (struct CPU *ptr_cpu) {

    ptr_cpu->clock += 5;
    ptr_cpu->temperatura += 15;

    if(ptr_cpu->temperatura >= 90) {
        printf("ALERTA: RISCO TÉRMICO! Temperatura crítica:%d°\n", ptr_cpu->temperatura);
    } else {
        printf("Overclock aplicado. Temperatura atual: %d°\n", ptr_cpu->temperatura);
    }
}