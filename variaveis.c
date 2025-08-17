// biblioteca com funções de entrada e saída (printf)
#include <stdio.h> 

// função main
int main() {
    #include <stdio.h>

    //especificadores

    // %d: Imprime um inteiro no formato decimal.
     
    // %i: Equivalente a %d.
     
    // %f: Imprime um número de ponto flutuante no formato padrão.
     
    // %e: Imprime um número de ponto flutuante na notação científica.
     
    // %c: Imprime um único caractere.
     
    // %s: Imprime uma cadeia (string) de caracteres.

    // variaveis
    int idade = 25; //inteiro
    float altura = 1.75; //decimal
    double saldoBancario = 12345.67; //decimal
    char inicial = 'A'; //caractere
    char nome[20] = "Bruno"; // cadeia de caracteres (string) 
 
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);

    return 0;
}