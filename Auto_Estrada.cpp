#include <iostream>
#include <string>
using namespace std;
/*
Resposta para o problema Auto Estrada
Feito por Gustavo Santos
https://br.spoj.com/problems/AUTO08/
*/
int main()
{
    int qrua, paineis; /*Qrua= Quantidade de Ruas e paineis=Quantidade de Paineis*/
    char tiporua;      /*Char para ver o tipo da rua*/
    cin >> qrua;
    paineis = 0;                   /*Inicializa a variável*/
    for (int i = 0; i < qrua; i++) /*Loop para Checkar cada uma*/
    {
        cin >> tiporua;
        if (tiporua == 'P' || tiporua == 'C') /*Se for do tipo P ou C adiciona 2 paineis*/
        {
            paineis = paineis + 2;
        }
        else if (tiporua == 'A') /*Se for do tipo A adiciona 1 painel*/
        {
            paineis++;
        }
    }
    cout << paineis << endl; /*Imprime total de paineis*/
    return 0;
}
