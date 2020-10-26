/*Faça um algoritmo que receba uma matriz 5x3 e um valor inteiro X
fornecido pelo usuário. A seguir, multiplique cada elemento da primeira e
da ultima linha da matriz pelo valor de X. Mostre a matriz resultante.*/

#include <stdio.h>
#include <conio.h>

int matriz[5][3], x, i, j;


int main() {

	for(i=0;i<5;i++)
		for (j = 0; j < 3; j++) 
		{
			printf("Digite elementos da matriz [%i][%i]: ", i, j);
			scanf_s("%i", &matriz[i][j]);
		}


	printf("Informe valor de X: ");
	scanf_s("%i", &x);

	for (i = 0; i < 1; i++)
		for (j = 0; j < 3; j++) 
		{
			matriz[i][j] *= x;
			printf("\nValor primeira linha multiplicado [%i][%i]: %i", i, j, matriz[i][j]);
		}


	for (i = 4; i < 5; i++)
		for (j = 0; j < 3; j++)
		{
			matriz[i][j] *= x;
			printf("\nValor ultima linha multiplicado [%i][%i]: %i", i, j, matriz[i][j]);
		}
}