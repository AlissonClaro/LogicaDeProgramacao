#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int exercicio1() {
	char nome[50];
	printf("Digite um nome: ");
	scanf("%s", nome);
	
	printf("Ola %s", nome);
	
	
	return 0;
}


int exercicio2() {

int numeros[5];
int indice;

for (indice = 0; indice < 5; indice++) {
        printf("Posicao Vetorial %d: ", indice + 1);
        scanf("%d", &numeros[indice]); // Armazena o valor no ?ndice
    }
    printf("\n");	
	
	for (indice = 0; indice < 5; indice++) {
		
		printf("%d", numeros[indice]);	
		if (indice < 5) {
			printf(", ");
		} else
		printf(".");
	}
	printf("\n");	

return 0;
}

int exercicio3(){
	
		int numeros [3][3];
		int linha, coluna;
		int somatotal;
	
	for (linha = 0; linha < 3;linha++){
		for (coluna = 0; coluna < 3;coluna++) {
			printf("Digite um valor [%d, %d]: ", linha, coluna);
			scanf("%d", &numeros [linha][coluna]);
			somatotal += numeros[linha][coluna];
		}
		
	}
	
	for (linha = 0; linha < 3;linha++){
		for (coluna = 0; coluna < 3; coluna++) {
			printf("%d ", numeros[linha][coluna]);
		}
		printf("\n");
	}
	
	printf("Soma Total %d", somatotal);
		
	
	return 0;
}


int main() {
	exercicio3();
	return 0;
}
