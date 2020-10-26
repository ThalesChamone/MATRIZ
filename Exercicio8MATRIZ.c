/*Faça um algoritmo que leia uma matriz 2x5 e contar quantos valores da
matriz estão entre 10 e 20.*/

#include <stdio.h>
#include <conio.h>

int matriz[2][5], i, j, contar = 0;

int main() {

	for(i=0;i<2;i++)
		for (j = 0; j < 5; j++) 
		{
			printf("\nDigite os elementos [%i][%i]: ", i, j);
			scanf_s("%i", &matriz[i][j]);

			if (matriz[i][j] >= 10 && matriz[i][j] <= 20) 
			{
				contar++;
			}
		}
	printf("\nQnt de valores entre 10 e 20 eh: %i\n", contar);
}