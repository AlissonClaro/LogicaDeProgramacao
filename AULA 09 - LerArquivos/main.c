#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeros[5];
	
	
	FILE *arquivo;
	
	arquivo = fopen("dados.txt", "r");
	
	if(arquivo == NULL) {
		printf("Erro ao abrir o arquivo\n");
		return 1;
	}
	
	int linha;
	for(linha = 0; linha <5; linha++) {
		fscanf(arquivo, "%d", &numeros[linha]);
	}
	
	fclose(arquivo);
	
	for(linha = 0; linha <5; linha++) {
		printf("%d\n", numeros[linha]);
	}
	
	arquivo = fopen("dados.txt", "a");
	
	if(arquivo == NULL) {
		printf("Erro ao abrir o arquivo.\n");
	}
	
	fprintf(arquivo, "\n60");
	
	fclose(arquivo);
	
	return 0;
}
