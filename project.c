#include <stdio.h>
#include <string.h> 

struct conta {
    char titular[50];
    float saldo;
};

void pagarBoleto (float valor, struct conta *c);

int main () {

    float boleto = 388.54;
    char opcao;
    struct conta leandro;
    strcpy(leandro.titular, "Leandro Amaro da Silva");
    leandro.saldo = 595.55;
    
    printf("Olá, %s. Deseja pagar o boleto no valor de R$%.2f? \nSaldo Atual: R$%.2f (s para Sim e n Para Não.)\n", leandro.titular, boleto, leandro.saldo);
    if(scanf("%c", &opcao) != 1) {
        printf("Erro: Formato inválido. Inicie o programa novamente.");
        while(getchar () != '\n');
        return 1;
    } 

    if (opcao == 's' || opcao == 'S') {
        pagarBoleto(boleto, &leandro);
    } else if (opcao == 'n' || opcao == 'N') {
        printf("Obrigado por usar nossos serviços!\n");
        return 0;
    } else {
        printf("Digite apenas s OU n.\n");
    }

    

    return 0;
}
void pagarBoleto (float valor, struct conta *ptr_conta) {
    if (ptr_conta->saldo >= valor) {
        ptr_conta->saldo -= valor;
        printf("Boleto pago! Saldo atual: R$%.2f\n", ptr_conta->saldo);
    } else {
        printf("Saldo insuficiene!");
    }
}