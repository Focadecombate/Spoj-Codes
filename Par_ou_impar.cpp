#include <iostream>
#include <string>
using namespace std;
/*
Resposta para o problema par ou impar
Feito por Gustavo Santos
https://br.spoj.com/problems/PAR/
*/
int main()
{
	int rodadas, numero_1, numero_2, total, teste; /*Ints Das Rodadas,n de cada jogador,total é a soma dos n escolhos e o n de teste*/
	string nome_1;
	string nome_2; /*Nome dos jogadores*/
	teste = 1;	   /*Numerar o teste*/
	for (;;)	   /*Loop Ilimitado*/
	{
		cin >> rodadas;
		if (rodadas == 0) /*Se entrar o valor 0 para rodadas quebra o loop*/
		{
			break;
		}
		cout << "Teste " << teste++ << endl; /*Imprime o teste*/
		cin >> nome_1 >> nome_2;			 /*Entra os nomes dos jogadores*/
		for (int i = 0; i < rodadas; i++)	 /*Roda cada jogo*/
		{
			cin >> numero_1 >> numero_2;     /*Entra os numeros*/
			total = numero_1 + numero_2;
			if (total % 2 == 0)              /*Testa se é par*/
			{
				cout << nome_1 << endl;
			}
			else                             /*Se for impar*/
			{
				cout << nome_2 << endl;
			}
		}
	}
	return 0;
}