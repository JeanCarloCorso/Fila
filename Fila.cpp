#include<stdio.h>
#include<stdlib.h>

int main()
{
	int fila[4];
	int inicio = 0;
	int fim = 0;
	int qelementos = 0;
	int exit = 0;
	int ops;
	while (exit == 0){
		printf("\n1----> Colocar um elemento na fila");
		printf("\n2----> Remover elemento da fila");
		printf("\n3----> Mostrar fila");
		printf("\n4----> Sair ");
		scanf_s("%d", &ops);
		fflush(stdin);
		if (ops == 1){
			system("cls");
			if (qelementos < 4){
				printf("\nInforme o valor a ser guardado ");
				scanf_s("%d", &fila[fim]);
				fim++;
				qelementos++;
				printf("\n\n\nValor salvo na fila!!!\n\n\n\n");
				if ((fim == 4) && (qelementos < 4)){
					fim = 0;
				}
			}
			else{
				printf("\nA fila esta cheia!!!\n\n\n\n ");
			}
		}
		else if (ops == 2){
			system("cls");
			if (inicio != fim){
				printf("\nO numero %d foi removido da fila!!!\n\n\n\n", fila[inicio]);
				inicio++;
				qelementos--;
			}
			else{
				printf("\nA fila esta vasia!!!\n\n\n\n");
			}
		}
		else if (ops == 3){
			system("cls");
			int xfim = fim;
			printf("\nValores salvis na fila: \n\n");
			for (int xinicio = inicio; xinicio != xfim; xinicio++){
				printf(" %d;", fila[xinicio]);

			}
			printf("\n\n");
		}
		else if (ops == 4){
			exit++;
		}
		else{
			printf("\n\nComando não reconhesido!!!\n\n\n\n");
		}
	}
	return(0);
}