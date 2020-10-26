/*Faça um algoritmo que recebe uma matriz M (3x3) e calcula a soma dos
elementos da diagonal principal e a soma dos elementos da diagonal
secundária da matriz.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int matriz[3][3] = { 1,2,3,4,5,6,7,8,9 }, i, j, somaP = 0, somaSecun = 0;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	for (i = 0; i < 3; i++) 
	{
		printf("\nValor diagonal principal: %i\n", matriz[i][i]);
		somaP += matriz[i][i];
	}
		
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) 
		{
			if ((i + j) == 2) 
			{
				printf("\nValor diagonal secundária: %i\n",matriz[i][j]);
				somaSecun += matriz[i][j];
			}
		}

	printf("\nA soma da diagonal principal é: %i\n\nA soma da diagonal secundária é: %i\n", somaP, somaSecun);
}






// for(i=0;i<3;i++)
//for (j = 0; j < 3; j++)