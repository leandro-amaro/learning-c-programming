#include <stdio.h>
#include <string.h> 

struct cura {
    char nome[50];
    int quantidade;
};

struct jogador {
    char nome[50];
    int vida;
};

void usarItem (struct cura *ptr_cura, struct jogador *ptr_jogador);

int main () {
    struct cura comum;
    strcpy(comum.nome, "Cura Comum");
    comum.quantidade = 3;

    struct jogador lean;
    strcpy(lean.nome, "Lean Lindão");
    lean.vida = 22;

    usarItem(&comum, &lean);

    return 0;
}

void usarItem (struct cura *ptr_cura, struct jogador *ptr_jogador) {
    if (ptr_cura->quantidade > 0) {
        ptr_cura->quantidade -= 1;
        ptr_jogador->vida += 50;
        printf("Usou Cura! Vida atual: %d. \nCuras restantes: %d\n", ptr_jogador->vida, ptr_cura->quantidade);
    } else {
        printf("Sem itens! Impossível curar.\n");
    }
}