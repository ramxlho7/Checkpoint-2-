#include <stdio.h>
#include <string.h>

void fibonacci() {
    int n, i;
    int vetor[50];

    printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50): ");
    scanf("%d", &n);

    if (n < 1 || n > 50) {
        printf("Valor inválido. Deve estar entre 1 e 50.\n");
        return;
    }

    vetor[0] = 0;
    if (n > 1) vetor[1] = 1;

    for (i = 2; i < n; i++) {
        vetor[i] = vetor[i-1] + vetor[i-2];
    }

    printf("Sequência de Fibonacci: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

// Função para calcular fatoriais
void fatoriais() {
    int n, i;
    int vetor[20];

    printf("Digite um número inteiro (1 a 20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Valor inválido. Deve estar entre 1 e 20.\n");
        return;
    }

    vetor[0] = 1;
    for (i = 1; i < n; i++) {
        vetor[i] = vetor[i - 1] * (i + 1);
    }

    printf("Fatoriais:\n");
    for (i = 0; i < n; i++) {
        printf("%d! = %d\n", i + 1, vetor[i]);
    }
}

// Função para verificar palíndromo
void verificar_palindromo() {
    char palavra[101];
    int i, tam, eh_palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);
    for (i = 0; i < tam / 2; i++) {
        if (palavra[i] != palavra[tam - 1 - i]) {
            eh_palindromo = 0;
            break;
        }
    }

    if (eh_palindromo)
        printf("A palavra é um palíndromo.\n");
    else
        printf("A palavra NÃO é um palíndromo.\n");
}


void verificar_substring() {
    char str1[101], str2[101];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (strstr(str1, str2))
        printf("A segunda string está contida na primeira.\n");
    else
        printf("A segunda string NÃO está contida na primeira.\n");
}

int main() {
    int opcao;

    printf("===== MENU DE EXERCÍCIOS =====\n");
    printf("1 - Sequência de Fibonacci;\n");
    printf("2 - Fatoriais;\n");
    printf("3 - Verificar Palíndromo;\n");
    printf("4 - Verificar Substring.\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            fibonacci();
            break;
        case 2:
            fatoriais();
            break;
        case 3:
            verificar_palindromo();
            break;
        case 4:
            verificar_substring();
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

//alunos Felipe Ramalho(RM:565073), Mateus Fransisco (RM: 562119), Pedro Del Neri (RM: 562168) e Vitor Limeira(RM:565280)

//ex 1, feito por Pedro Del Neri
//EX 2, feito por Vitor Limeira
//ex 3, feito por Felipe Ramalho
//ex 4, feito por Mateus Magal
