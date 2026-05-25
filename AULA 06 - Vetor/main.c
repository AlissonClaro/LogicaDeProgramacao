#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int numeros[5];
	int num;
	int valores[3] = {2, 5, 3};
	
	int notas[] = {5, 7, 5, 8};
	
	valores[2] = 7;
	
		numeros[0] = 10;
		numeros[4]  = 50;
		
		int indice;
		for (indice = 0; indice < 5; indice++) {
			printf("Digite um numero inteiro: ");
			scanf("%d", &numeros[indice]);
		}
		
		int tamanho = sizeof(numeros)/sizeof(numeros[0]);
		
		for (indice = 0; indice < 5; indice++) {
			printf("%d\n", numeros[indice]);
		}
		
		printf("%d\n", numeros[0]);
		printf("%d\n", numeros[1]);
		printf("%d\n", numeros[2]);
		printf("%d\n", numeros[3]);
		printf("%d\n", numeros[4]);
	
	return 0;
}
