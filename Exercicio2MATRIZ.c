/*Elaborar um algoritmo que permita ao usuário preencher uma matriz 3x3
de números inteiros e calcule a soma dos elementos da matriz.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int matriz[3][3], i, j, soma = 0;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			printf("Digite os valores da matriz [%i][%i] ", i, j);
			scanf_s("%d", &matriz[i][j]);
			soma += matriz[i][j];
			
		}
	}

	printf("Soma elementos matriz é: %i", soma);
	

}