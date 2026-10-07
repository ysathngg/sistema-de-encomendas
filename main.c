#include <stdio.h>

int main() {
    float precos_encomendas[100];
    int qtd_encomendas = 0;
    int opcao_menu = 0;

    while (opcao_menu != 5) {
        printf("\n========================================\n");
        printf("    ATELIÊ YSA PERSONALIZADOS - CRUD    \n");
        printf("========================================\n");
        printf("1. Registrar valor de nova encomenda\n");
        printf("2. Consultar todas as encomendas\n");
        printf("3. Atualizar valor de encomenda\n");
        printf("4. Cancelar/Remover encomenda\n");
        printf("5. Sair do sistema\n");
        printf("----------------------------------------\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao_menu);

        switch (opcao_menu) {
            case 1:
                if (qtd_encomendas < 100) {
                    printf("\n[NOVA ENCOMENDA]\n");
                    printf("Informe o valor do item personalizado (R$): ");
                    scanf("%f", &precos_encomendas[qtd_encomendas]);
                    
                    if (precos_encomendas[qtd_encomendas] > 0) {
                        qtd_encomendas++;
                        printf(">> Encomenda registrada com sucesso no Ysa Personalizados!\n");
                    } else {
                        printf(">> Atencao: O valor precisa ser maior que R$ 0.00.\n");
                    }
                } else {
                    printf(">> Capacidade maxima de 100 encomendas atingida!\n");
                }
                break; 