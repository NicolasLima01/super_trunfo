// biblioteca com funções de entrada e saída (printf)
#include <stdio.h> 

// função main
int main() {
    //entrada de valores
 
    int idade;
    printf(" \n Digite sua idade: \n");
    scanf("%d", &idade); //função que le o que usuario escreveu, precisa-se definir o especificador e a variável (&)
    printf("Sua idade é: %d\n", idade);
    return 0;

    char nome[20] = "sla";
    printf(" \n Digite seu nome: \n");
    fgets(nome, 50, stdin); //função que le strings com espaço (50 caracteres)
    printf("Sua idade é: %d\n", idade);
}