/*Faça um algoritmo que receba uma matriz 6 x 3 e calcule a soma dos
elementos das linhas pares da matriz.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int matriz[6][3], i, j, soma = 0;


int main() {

	for(i=0;i<6;i++)
		for (j = 0; j < 3; j++) 
		{
			printf("Digite elementos matriz [%i][%i]: ", i, j);
			scanf_s("%i", &matriz[i][j]);
		}

	for (i = 0; i < 6; i++) 
	{
		for (j = 0; j < 3; j++) 
		{

			if (i % 2 == 0)
			{
				soma += matriz[i][j];
			}

		}
	}

	printf("\nSoma valores da linhas pares eh: %i", soma);


	
}

