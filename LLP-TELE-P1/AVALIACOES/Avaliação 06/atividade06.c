#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 100

typedef struct {
    int codigo;
    char descricao[50];
    float valorUnitario;
    int qtdEstoque;
    float valorEstoque;
} Produto;

Produto produtos[MAX_PRODUCTS];
int numProdutos = 0;

void mostrarMenu() {
    printf("----------------------------------------------------------------------\n");
    printf("Sistema de Estoque\n");
    printf("----------------------------------------------------------------------\n");
    printf("1) Entrada de Produtos\n");
    printf("2) Listar os Produtos\n");
    printf("3) Valor Total do Estoque\n");
    printf("4) Fim\n");
    printf("Opção: __\n");
    printf("----------------------------------------------------------------------\n");
}

void entradaProduto() {
    Produto produto;
    printf("----------------------------------------------------------------------\n");
    printf("Entrada de Cadastro de Produtos\n");
    printf("----------------------------------------------------------------------\n");
    printf("Código: ");
    scanf("%d", &produto.codigo);
    printf("Descrição: ");
    scanf("%49s", produto.descricao);
    printf("Valor Unitário: ");
    scanf("%f", &produto.valorUnitario);
    printf("Qtd Estoque: ");
    scanf("%d", &produto.qtdEstoque);
    produto.valorEstoque = produto.valorUnitario * produto.qtdEstoque;
    printf("Valor Estoque: %.2f\n", produto.valorEstoque);
    printf("Digite (1-Para Gravar, 2-Voltar a tela inicial) : ");
    int opcao;
    scanf("%d", &opcao);
    if (opcao == 1) {
        produtos[numProdutos] = produto;
        numProdutos++;
    }
}

int main() {
    int opcao;
    do {
        mostrarMenu();
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                entradaProduto();
                break;
            case 2:
                // implementar listar produtos
                break;
            case 3:
                // implementar valor total do estoque
                break;
            case 4:
                printf("Fim do programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 4);
    return 0;
}