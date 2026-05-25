#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int inicio = 0, fim = 0;
	
	printf("Digite o valor inicial\n");
	scanf("%d", &inicio);
	
	printf("Digite o valor final\n");
	scanf("%d", &fim);
	
	if (fim < inicio) {
		int alocar = inicio;
		inicio =fim;
		fim = alocar;
	}
	
	for (int cont = inicio; cont <= fim; cont ++) {
	
		if(cont % 50 == 0){		
		printf("%d\n", cont);
		}	
	}
	
/*	for (int cont = 0; cont <= 2000; cont++){
		if (cont % 50 == 0) {
			
			printf("%d,", cont);
			printf("Numero *\n");
		} 
	} */
	return 0;
}
