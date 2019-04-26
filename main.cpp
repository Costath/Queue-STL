/*

Autor: Thales Costa
Disciplina: ED2
Professor: Irineu
Agosto/2017

*/

#include "biblioteca.h"

int main() {
	setlocale(LC_ALL, "");

	bool sair = false;
	int menu, element;
	
	while (!sair){
		
		printf("1 - push\n");
		printf("2 - pop\n");
		printf("3 - size\n");
		printf("4 - isEmpty\n");
		printf("5 - front\n");
		printf("6 - sair\n\n");
		
		scanf("%d", &menu);
		
		switch(menu){
			case 1:		//push
				printf("\n\nElemento a ser inserido: ");
				scanf("%d", &element);
				Push(element);
				
				system("cls");
				
			break;
			case 2:		//pop
				if(!isEmpty()){
					printf("\n\nO elemento \"%d\" foi retirado\n\n", Pop());
					
				}else{
					printf("\n\nERRO - A fila está vazia.\n\n");
				}
				
				system("pause");
				system("cls");
				
			break;
			case 3:		//size
				printf("\n\nTamanho da fila: %d\n\n", Size());
				
				system("pause");
				system("cls");
				
			break;
			case 4:		//isEmpty
				if(isEmpty()){		//retorna 'true' caso a fila esteja vazia, 'false' caso contrário
					printf("\n\nA fila está vazia.\n\n");
				}else{
					printf("\n\nA fila não está vazia.\n\n");
				}
				
				system("pause");
				system("cls");
			
			break;
			case 5:		//front
				if(!isEmpty()){		//chama a função front caso a fila não esteja vazia
					printf("\n\nElemento na frente da fila: %d\n\n", Front());
				}else{
					printf("\n\nERRO - A fila está vazia.\n\n");
				}
				
				system("pause");
				system("cls");
				
			break;
			case 6:		//sair
				sair = true;
				printf("\nObrigado!\n");
				
			break;
			
		}
		
	}
	
	return 0;
}
