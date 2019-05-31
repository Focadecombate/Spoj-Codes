#include <iostream>
#include <string>
using namespace std;
/*
Resposta do problema Telefone.
Feito por Gustavo Santos.
https://br.spoj.com/problems/TEL8/
*/
int main()
{
	string numero; /*String que armazena a entrada*/
	cin >> numero;
	char Letra; /*Char para testar cada caractere da string*/
	int quant;
	quant = numero.length(); /*Transfere o tamanho da string para uma int*/
	for (signed int i = 0; i < quant; i++)
	{
		Letra = numero[i];				  /*Separa a string por caractere para converter se necessário*/
		if (Letra >= 'A' && Letra <= 'C') /*Converte as letras para números*/
		{
			cout << 2;
		}
		else if (Letra >= 'D' && Letra <= 'F')
		{
			cout << 3;
		}
		else if (Letra >= 'G' && Letra <= 'I')
		{
			cout << 4;
		}
		else if (Letra >= 'J' && Letra == 'L')
		{
			cout << 5;
		}
		else if (Letra >= 'M' && Letra <= 'O')
		{
			cout << 6;
		}
		else if (Letra >= 'P' && Letra <= 'S')
		{
			cout << 7;
		}
		else if (Letra >= 'T' && Letra <= 'V')
		{
			cout << 8;
		}
		else if (Letra >= 'W' && Letra <= 'Z')
		{
			cout << 9;
		}
		else
		{
			cout << Letra;
		}
	}
	return 0;
}
