//Atividade 1: Verificar se um número é positivo, negativo ou zero usando if
#include <stdio.h>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("O número é positivo.\n");
    } else if (num < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}
//Atividade 2: Determinar se um ano é bissexto ou não usando if else
#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400 == 0) {
                printf("O ano é bissexto.\n");
            } else {
                printf("O ano não é bissexto.\n");
            }
        } else {
            printf("O ano é bissexto.\n");
        }
    } else {
        printf("O ano não é bissexto.\n");
    }

    return 0;
}
//Atividade 3: Exibir o dia da semana correspondente a um número usando switch
#include <stdio.h>

int main() {
    int dia;

    printf("Digite um número de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Número inválido.\n");
            break;
    }

    return 0;
}
//Atividade 4: Exibir o maior de dois números inteiros usando o operador ternário
#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    int maior = (a > b) ? a : b;

    printf("O maior número é: %d\n", maior);

    return 0;
}