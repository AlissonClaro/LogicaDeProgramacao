#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num[10];
	int indice;
	
	/*2. Crie um vetor de 10 inteiros. Preencha
com valores digitados pelo usuário e exiba em seguida.*/
	printf("Digite 10 numeros inteiros:\n");
    for (indice = 0; indice < 10; indice++) {
        printf("Posicao Vetorial %d: ", indice + 1);
        scanf("%d", &num[indice]); // Armazena o valor no índice
    }
    printf("\n");	
	
	for (indice = 0; indice < 10; indice++) {
		
		printf("%d", num[indice]);	
		if (indice < 9) {
			printf(", ");
		} else
		printf(".");
	}
	printf("\n");		
	
	
	/*3. Leia 5 números e armazene em um vetor.
Exiba os números na ordem inversa.*/
	for (indice = 5; indice > 0; indice--) {
		printf("%d,", num[indice]);
		
		if(indice < 1)
		printf(".");
	}
	printf("\n");
	
	/*4. Leia 8 números e mostre apenas os
números pares.*/
	for (indice = 0; indice < 8; indice++) {
	if (num[indice] % 2 == 0)
	printf("%d,", num[indice]);
	}
	printf("\n");
	
	/*5. Leia 6 números e conte quantos são
maiores que 10.
*/
	int cont = 0;
	for (indice = 0; indice < 6; indice++) {
	if (num[indice] >= 10 )
	cont ++;
	printf("%d,", num[indice]);
	}
	printf("\n");
	printf("Quantidade de numeros maiores que 10: ");
	printf("%d", cont);
	
	
	return 0;
}
