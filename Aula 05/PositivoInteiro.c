#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {



int num = 0, result = 0;
float metade = 0;

//
//printf("Digite um numero: ");
//scanf("%d", &num);

while(1){
		printf("Digite um numero: ");
		scanf("%d", &num);
		if (num < 0) {
			printf("O numero eh negativo tente novamente \n");
		} else if (num == 0) {
			printf("O numero eh neutro tente novamente \n");
		} else {
			break;
		}
}

printf("Numero: %d\n", num);


if (num >= 0) {
	printf("O numero e positivo \n");
} else {
	printf("Numero invalido nao e positivo! \n");
	return 0;
}

result = num*2;

printf("O dobro: %d\n", result);

metade = num / 2.0;

if (num % 2 == 0){

printf("A divisao: %d\n", result);

} else {
	printf("A divisao: %.2f\n", metade);
}
if (num % 2 == 0) {

printf("O numero par!");

} else {
printf("O numero impar!");
}

printf("Tabuada\n");

int multiplicador;
for(multiplicador = 1; multiplicador <=10; multiplicador++){
	printf("%d x %d = %d\n", num, multiplicador,  num * multiplicador);
}

int opcao;


printf("Avaliar se o numero e multiplo de 3? [1 = sim, 2 = nao]");
scanf("%d", &opcao);

switch(opcao){
	case 1:
		if(num % 3 == 0) {
			printf("Numero multiplo de 3.");
		} else {
			printf("Numero nao e multiplo de 3.");
		}
		break;
		
	case 2:
		printf("Nao e valido");
		break;
}


	return 0;
}
