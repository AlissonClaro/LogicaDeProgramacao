#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int primeiroExemplo() {
	char nome[50];
	
	printf("Digite seu nome:");
	scanf("%s", nome);
	
	printf("Olá, %s\n", nome);
	
	return 0;
}


int segundoExemplo(){
	char nome[50];
	
	printf("Digite seu nome: ");
	fgets(nome, 50, stdin);
	
	printf("Nome digitado: %s", nome);
	
	return 0;
}


int terceiroExemplo() {
	char uf[3];
	printf("Digite a UF: ");
	scanf("%2s", uf);
	
	printf("A UF e: %s", uf);
	
	
	return 0;
}




int main() {
	terceiroExemplo();
	return 0;
}
