#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (int argc, char *argv[]) {

	int segundo_exemplo() {
		//Declaração de variavel inteira
		int quantidade;	
		
			
		//Ler o valor da variavel 'quantidade'
		printf("Digite a quantidade de notas: ");
		scanf("%d", quantidade);
		
		//Declarando o vetor 'notas'
		int notas[quantidade];
		
		int indice;
		for(indice = 0; indice < quantidade; indice++){
			printf("Digite a nota [%d] : ", indice + 1 );
			scanf("%d", notas[indice]);
		}
		
	}
	return 0;
	
}
