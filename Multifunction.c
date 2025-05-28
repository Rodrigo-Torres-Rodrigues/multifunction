//Um ultimatium
//Tempo gasto: 45 minutos
//printf("\e[2J\e[H");

#include <stdio.h>
#include <stdbool.h>

int menu(), menu_vet();
int vetor();
void invalido();

int main(){
    printf("\e[2J\e[H");

    switch(menu()){
        case 0:
        return 0;

        case 1:
        printf("%d", vetor());
        menu_vet();
        break;

        case 2:

        break;

        default:
        invalido();
        return main();
    }
}

int menu(){
    int option;
    printf("Digite o que você quer fazer no código:\n");
    printf("0 --> Sair do programa;\n");
    printf("1 --> Pegar um conjunto de valores (reais e inteiros);\n");
    scanf("%d", &option);
    return option;
}

void invalido(){
    int inutil;
    printf("Você digitou um valor inválido.\n");
    printf("Pressione qualquer tecla para continuar...");
    scanf("%d", &inutil); //provavlemente, tem uma maneira mais fácil e sem gambiarra de fazer isso, apenas um system("PAUSE"); , porém, não presta em todos os SOs;
    //pode apenas colcar um verdadeiro caractere, mas não apenas o enter
}
void vetor(){ //pesquisar pointers
    int quant_num, vezes_num;
    printf("Digite a quantidade de números que você quer colocar:\n");
    scanf("%d", &quant_num);
    printf("\e[2J\e[H");

    float num[quant_num];
    for(vezes_num = 1; vezes_num <= quant_num; vezes_num++){
        printf("Digite o número %d:", vezes_num);
        scanf("%f", &num[vezes_num - 1]);
    }
}

int menu_vet(){
    int opcao_vet;
    printf("O que você gostaria de fazer com estes números?\n");
    printf("0 --> Sair desta aba\n");
    switch(scanf("%d", &opcao_vet)){
        case 0:
        return main();
        case 1:
        break;
        default:
        invalido();
    }
}
