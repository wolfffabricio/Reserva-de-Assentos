#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void cabecalho(char matrizAssentos[6][29]);
void realizarReserva(char matrizAssentos[6][29]);
void cancelarReserva(char matrizAssentos[6][29]);
void reservaAssento(int fila, int assentoEscolhidoReserva, char matrizAssentos[6][29]);
void cancelaAssento(int fila, int assentoEscolhidoReserva, char matrizAssentos[6][29]);

int i;
char continuar;

int main() {
	
	char assentos[6][29]; // assentos[0] = F, assentos[1] = E, assentos[2] = D, assentos[3] = C, assentos[4] = B, assentos[5] = A
	int menu;
	
	while(menu != 3){
		
		printf("Ola, para realizar a reserva ou cancelamento de um assento escolha uma opcao:\n\n");
		printf("(1) Realizar reserva\n");
		printf("(2) Cancelar reserva\n");
		printf("(3) Sair\n");
		printf(": ");
		scanf("%d", &menu);
		fflush(stdin);
	
		switch(menu){
			case 1:
				system("cls");
				realizarReserva(assentos);
				break;
			case 2:
				system("cls");
				cancelarReserva(assentos);
				break;
			case 3:
				exit(0);
			default:
				printf("\n----------------------------------------------------");
				printf("\nOpcao invalida\n");
				printf("\n----------------------------------------------------\n");
				system("PAUSE");
				system("cls");
				
		}
	}
	return 0;
}

void cabecalho(char matrizAssentos[6][29]){
	
	// Numeração da fila
	for(i = 0; i < 29; i++){
		printf("%*d", 4, i+1);
	}
	printf("\n");
	
	// Letra F
	printf("\n%-2s", "F");
	for(i = 0; i < 29; i++){
		if(matrizAssentos[0][i] == 'x'){
			printf("%-4s", "[x]");
		} else {
			printf("%-4s", "[ ]");
		}
		
	}
	printf("%2s", "F");
	
	// Letra E
	printf("\n%-2s", "E");
	for(i = 0; i < 29; i++){
		if(matrizAssentos[1][i] == 'x'){
			printf("%-4s", "[x]");
		} else {
			printf("%-4s", "[ ]");
		}
	}
	printf("%2s", "E");
	
	// Letra D
	printf("\n%-2s", "D");
	for(i = 0; i < 29; i++){
		if(matrizAssentos[2][i] == 'x'){
			printf("%-4s", "[x]");
		} else {
			printf("%-4s", "[ ]");
		}
	}
	printf("%2s", "D");
	printf("\n\n");
	
	// Letra C
	printf("\n%-2s", "C");
	for(i = 0; i < 29; i++){
		if(matrizAssentos[3][i] == 'x'){
			printf("%-4s", "[x]");
		} else {
			printf("%-4s", "[ ]");
		}
	}
	printf("%2s", "C");
	
	// Letra B
	printf("\n%-2s", "B");
	for(i = 0; i < 29; i++){
		if(matrizAssentos[4][i] == 'x'){
			printf("%-4s", "[x]");
		} else {
			printf("%-4s", "[ ]");
		}
	}
	printf("%2s", "B");
	
	// Letra A
	printf("\n%-2s", "A");
	for(i = 0; i < 29; i++){
		if(matrizAssentos[5][i] == 'x'){
			printf("%-4s", "[x]");
		} else {
			printf("%-4s", "[ ]");
		}
	}
	printf("%2s", "A");
	printf("\n\n");
	
	// Numeração da fila
	for(i = 0; i < 29; i++){
		printf("%*d", 4, i+1);
	}
	printf("\n");

}

void realizarReserva(char matrizAssentos[6][29]){
	
	fflush(stdin);
	int assentoEscolhido;
	char filaEscolhida;
	
	cabecalho(matrizAssentos);
	printf("\n");
		
	printf("Digite a fila(MAIUSCULO) que deseja adquirir: ");
	scanf("%c", &filaEscolhida);
	fflush(stdin);
	printf("Digite o numero do assento que deseja adquirir: ");
	scanf("%d", &assentoEscolhido);
	fflush(stdin);
		
	switch(filaEscolhida){
		case 'F':
			reservaAssento(0, assentoEscolhido, matrizAssentos);
			break;
		case 'E':
			reservaAssento(1, assentoEscolhido, matrizAssentos);
			break;
		case 'D':
			reservaAssento(2, assentoEscolhido, matrizAssentos);
			break;
		case 'C':
			reservaAssento(3, assentoEscolhido, matrizAssentos);
			break;
		case 'B':
			reservaAssento(4, assentoEscolhido, matrizAssentos);
			break;
		case 'A':
			reservaAssento(5, assentoEscolhido, matrizAssentos);
			break;
		default:
			printf("\n----------------------------------------------------");
			printf("\nOpcao invalida\n");
			printf("\n----------------------------------------------------");
			printf("\nDigite qualquer tecla para continuar: ");
			continuar = getchar();
			break;
	}
	fflush(stdin);
	system("cls");
}

void cancelarReserva(char matrizAssentos[6][29]){
	
	fflush(stdin);
	int assentoEscolhido;
	char filaEscolhida;
	
	cabecalho(matrizAssentos);
	printf("\n");
		
	printf("Digite a fila(MAIUSCULO) que deseja cancelar: ");
	scanf("%c", &filaEscolhida);
	fflush(stdin);
	printf("Digite o numero do assento que deseja cancelar: ");
	scanf("%d", &assentoEscolhido);
	fflush(stdin);
	
	switch(filaEscolhida){
		case 'F':
			cancelaAssento(0, assentoEscolhido, matrizAssentos);
			break;
		case 'E':
			cancelaAssento(1, assentoEscolhido, matrizAssentos);
			break;
		case 'D':
			cancelaAssento(2, assentoEscolhido, matrizAssentos);
			break;
		case 'C':
			cancelaAssento(3, assentoEscolhido, matrizAssentos);
			break;
		case 'B':
			cancelaAssento(4, assentoEscolhido, matrizAssentos);
			break;
		case 'A':
			cancelaAssento(5, assentoEscolhido, matrizAssentos);
			break;
		default:
			printf("\n----------------------------------------------------");
			printf("\nOpcao invalida\n");
			printf("\n----------------------------------------------------");
			printf("\nDigite qualquer tecla para continuar: ");
			continuar = getchar();
			break;
	}
	fflush(stdin);
	system("cls");
}

void reservaAssento(int fila, int assentoEscolhidoReserva, char matrizAssentos[6][29]){
	
	if(matrizAssentos[fila][assentoEscolhidoReserva-1] == 'x'){
		printf("\n----------------------------------------------------");
		printf("\nAssento ocupado.\n");
		printf("\n----------------------------------------------------");
		printf("\nDigite qualquer tecla para continuar: ");
		continuar = getchar();
	} else {
		matrizAssentos[fila][assentoEscolhidoReserva-1] = 'x';
	}
}

void cancelaAssento(int fila, int assentoEscolhidoReserva, char matrizAssentos[6][29]){
	
	if(matrizAssentos[fila][assentoEscolhidoReserva-1] == 'x'){
		matrizAssentos[fila][assentoEscolhidoReserva-1] = '0';
	} else {
		if(matrizAssentos[fila][assentoEscolhidoReserva-1] == '0'){
			printf("\n----------------------------------------------------");
			printf("\nAssento ja cancelado.\n");
			printf("\n----------------------------------------------------");
			printf("\nDigite qualquer tecla para continuar: ");
			continuar = getchar();
		} else {
			printf("\n----------------------------------------------------");
			printf("\nAssento nao ocupado.\n");
			printf("\n----------------------------------------------------");
			printf("\nDigite qualquer tecla para continuar: ");
			continuar = getchar();
		}
	}
}

