/*Faça um algoritmo que leia uma matriz 4x4 e calcula o total dos valores
somados da segunda com a quarta coluna da matriz.*/

#include <stdio.h>
#include <conio.h>

int matriz[4][4], i, j, soma = 0;

int main() {
	for (i = 0; i < 4; i++) 
		for (j = 0; j < 4; j++) 
		{
			printf("Digite elementos matriz [%i][%i]: ", i, j);
			scanf_s("%i", &matriz[i][j]);
		}

	for (i = 0; i < 4; i++)
		for (j = 1; j < 2; j++)
		{
			soma += matriz[i][j];
		}

	for (i = 0; i < 4; i++)
		for (j = 3; j < 4; j++)
		{
			soma += matriz[i][j];
		}
	
	printf("\nSoma dos valores eh: %i\n", soma);
}