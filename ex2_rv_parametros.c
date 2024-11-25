#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
    if (argc != 2) {
        printf("Uso: %s <numero_inteiro>\n", argv[0]);
        return 1; 
    }

    // Converte o argumento para um número inteiro
    int numero = atoi(argv[1]);

    // Verifica se o número é par ou ímpar e imprime a mensagem
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
	}
	return 0;
}