#include <iostream>
#include <string>
using namespace std;
/*
Resposta do problema senha da tia.
Feito por Gustavo Santos.
https://br.spoj.com/problems/SENHATIA/
*/
int main()
{
	int Ncaracmin, Minuscmin, Maiuscmin, Numerosmin, quant;		/*Ints com as caracteristicas*/
	string senha;																							/*String onde entra a senha*/
	cin >> Ncaracmin >> Minuscmin >> Maiuscmin >> Numerosmin; /*Entrada dos minimos*/
	cin >> senha;																							/*Entrada Senha*/
	quant = senha.length();																		/*Transfere o tamanho da string para uma int (evita erro no for)*/
	int Nmaiusculas = 0, Nnumeros = 0, NMinusc = 0;
	for (int signed i = 0; i < quant; i++) /*Contador dos minimos*/
	{
		if (senha[i] >= 'a' && senha[i] <= 'z')
		{
			NMinusc++;
		}
		if (senha[i] >= 'A' && senha[i] <= 'Z')
		{
			Nmaiusculas++;
		}
		if (senha[i] >= '0' && senha[i] <= '9')
		{
			Nnumeros++;
		}
	}
	if (quant < Ncaracmin) /*Testes para validar a senha caso todos falhem a Senha é valida*/
	{
		cout << "Ufa :)" << endl;
	}
	else if (NMinusc < Minuscmin)
	{
		cout << "Ufa :)" << endl;
	}
	else if (Nmaiusculas < Maiuscmin)
	{
		cout << "Ufa :)" << endl;
	}
	else if (Nnumeros < Numerosmin)
	{
		cout << "Ufa :)" << endl;
	}
	else
	{
		cout << "Ok =/" << endl;
	}
	return 0;
}