/*Faça um algoritmo que leia uma matriz de 4 linhas e 5 colunas e encontra o
maior elemento da matriz.*/

#include <stdio.h>
#include <conio.h>

int matriz[4][5], i, j, maior;

int main() {
	maior = matriz[0][0];
	for(i=0;i<4;i++)
		for (j = 0; j < 5; j++) 
		{
			printf("Digite elementos matriz [%i][%i]: ", i, j);
			scanf_s("%i", &matriz[i][j]);

			if (matriz[i][j] > maior) 
			{
				maior = matriz[i][j];
			}
		}

	printf("\nMaior valor matriz: %i", maior);

	
}