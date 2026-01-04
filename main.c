#include <stdio.h>
#include <string.h>

struct arma {
    char nome[50];
    int dano;
    int durabilidade;
    int peso;
};

void atacar(struct arma *ptr_arma) {
    printf("\n--- Você atacou com %s! ---\n", ptr_arma->nome);

    ptr_arma->durabilidade -= 10;

    printf("Durabilidade caiu para: %d", ptr_arma->durabilidade);
}

int main () {

    struct arma inventario[3];

    strcpy(inventario[0].nome, "Lâmina Blasfema");
    inventario[0].dano = 15;
    inventario[0].durabilidade = 200;
    inventario[0].peso = 15;

    strcpy(inventario[1].nome, "Espada Bastarda");
    inventario[1].dano = 20;
    inventario[1].durabilidade = 250;
    inventario[1].peso = 32;

    strcpy(inventario[2].nome, "Lâmina sob carne e ossos");
    inventario[2].dano = 25;
    inventario[2].durabilidade = 150;
    inventario[2].peso = 12;

    printf("--- ARMAS ---\n");
    for(int i = 0; i < 3; i++) {
        printf("Arma %d: %s | Dano: %d | Durabilidade: %d | Peso: %d\n", i + 1, inventario[i].nome, inventario[i].dano, inventario[i].durabilidade, inventario[i].peso);
    }

    printf("INICIANDO FASE DE ATAQUE!");

    atacar(&inventario[0]);

    
}