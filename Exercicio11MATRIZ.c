/*Fa�a um algoritmo que leia uma matriz 3x4 de n�meros inteiros e conta
quantos n�meros pares e quantos n�meros impares existem na matriz.*/

#include <stdio.h>
#include <conio.h>

int matriz[3][4], i, j, par=0, impar=0;


int main() {
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++) 
		{
			printf("Digite elemento da matriz [%i][%i]: ", i, j);
			scanf_s("%i", &matriz[i][j]);
		}

	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++) 
		{
			if (matriz[i][j] % 2 == 0) 
			{
				par++;
			}
			else 
			{
				impar++;
			}
		}

	printf("\nQuantidade de pares na matriz: %i", par);
	printf("\nQuantidade de impares na matriz: %i\n", impar);
	
}