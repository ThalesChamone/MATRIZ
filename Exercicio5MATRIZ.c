/*Elabore um algoritmo que leia uma matriz 4x4 de inteiros e conte quantos
números pares existem na terceira coluna da matriz.*/

#include <stdio.h>
#include <conio.h>

int matriz[4][4], i, j, par = 0;

int main() {

	for (i = 0; i < 4; i++) 
	{
		for (j = 0; j < 4; j++)
		{
			printf("Elementos matriz [%i][%i]: ",i, j);
			scanf_s("%i", &matriz[i][j]);

		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 3; j < 4; j++)
		{
			if (matriz[i][j] % 2 == 0)
			{
				par++;
			}
		}
	}

	printf("\nNumero pares na terceira coluna: %i", par);
}