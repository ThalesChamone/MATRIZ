/*Faça um algoritmo que preenche uma matriz 4x4 e em seguida troca os
valores da primeira linha com os valores da quarta linha da mesma matriz.*/

#include <stdio.h>
#include <conio.h>

int matriz[4][4], i, j, conversor;

int main() {
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
		{
			printf("Digite elementos matriz [%i][%i]: ", i, j);
			scanf_s("%i", &matriz[i][j]);
		}
	for (i = 0; i < 1; i++)
		for (j = 0; j < 4; j++) 
		{
			conversor = matriz[i][j];
			matriz[i][j] = matriz[3 - i][j];
			matriz[3 - i][j] = conversor;
		}
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++) 
		{
			printf("\nValor para linha %i e coluna %i eh: %i", i, j, matriz[i][j]);
		}
}