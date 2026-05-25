#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *entrada;
	FILE *saida;
	
	
	int quantidade, numero1, numero2, resultado;
	
	entrada = fopen("entrada.in", "r");
	saida = fopen("saida.out", "w");
	
	
	if(entrada == NULL) {
		printf("Erro ao abrir o arquivo de entrada");
		return 1;
	}
	
		if(saida == NULL) {
		printf("Erro ao abrir o arquivo de saida");
		return 1;
	}
	
	fscanf(entrada, "%d", &quantidade);
	
	printf("Quantidade: \n%d\n", quantidade);
	
	int cont;
	for(cont= 0; cont < quantidade; cont++) {
		fscanf(entrada, "%d %d", &numero1, &numero2);
		
		resultado = numero1 * numero2;
		
//		printf("%d\n", resultado);
		fprintf(saida, "%d\n", resultado);
	}
	
	fclose(entrada);
	fclose(saida);
	
	return 0;
}
