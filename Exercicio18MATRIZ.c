/*/*Faça um algoritmo que carregue:
a. Um vetor com os nomes de 5 produtos;
b. Uma matriz 5x4 com os preços dos 5 produtos em 4 lojas diferentes
(cada linha da matriz corresponde a uma loja);
 Diante disso, faça uma segunda matriz 5x4 com os valores dos impostos
destes produtos a partir da seguinte regra:
Preço até 50,00 = 5% imposto
Preço entre 50,00 e 100 = 10% imposto
Preço acima de 100 = 20% imposto
 Imprima ainda, qual o nome do produto mais caro na loja 3 (terceira linha
da matriz).*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int i, j;
float valorL[4][5], imposto[4][5], maisCARO = -50;
char produto[5][50], loja[4][50] = { "Casas Bahia", "Ponto Frio", "Epa", "Extra" }, nomeCARO[50];




int main() {
	setlocale(LC_ALL, "Portuguese");
	for (i = 0; i < 5; i++) 
	{

		printf("Digite o produto: ");
		scanf_s("%[^\n]s", &produto[i],50);
		getchar();
	}

	for (i = 0; i < 4; i++) 
		for (j = 0; j < 5; j++) 
		{
			fflush(stdin);
			printf("Digite preço produto (%s) na loja [%s]: ", produto[j], loja[i]);
			scanf_s("%f", &valorL[i][j]);

		}


	for (i = 0; i < 4; i++) 
		for (j = 0; j < 5; j++) 
		{
			if (valorL[i][j] <= 50)
			{
				imposto[i][j] = valorL[i][j] * 0.05 + valorL[i][j];
			}
			if (valorL[i][j] > 50 && valorL[i][j] <= 100)
			{
				imposto[i][j] = valorL[i][j] * 0.10 + valorL[i][j];
			}
			if (valorL[i][j] > 100)
			{
				imposto[i][j] = valorL[i][j] * 0.10 + valorL[i][j];
			}
		}

	for (i = 3; i < 4; i++)
		for (j = 0; j < 5; j++) 
		{
			if (imposto[i][j] > maisCARO) 
			{
				maisCARO = imposto[i][j];
				nomeCARO[49] = strcpy_s(nomeCARO, 49, produto[i]);
			}
		}

	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++) 
		{
			printf("Valores com imposto [%i][%i]: %.2f\n", i, j, imposto[i][j]);
		}

	printf("\nO produto mais caro da loja 3 é %s com o valor de %.2f\n", nomeCARO, maisCARO);
}
