#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	FILE *entrada;
	
	char palavra[50];
	
	entrada = fopen("palavras.in", "r");
	
	if(entrada == NULL) {
		printf("Erro ao ler o arquivo de entrada.");
		return 1;
	}
	
	while(fscanf(entrada, "%s", palavra) != EOF){
		printf("Palavra: %s\n", palavra);
	}
	 
	fclose(entrada);
	
	return 0;
}
