#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    bool achei = false;

    string meuVetor[10],busca;

    for (int i = 0; i <10; i++)
    {
        cout <<"Insira o nome do aluno" << "[" << i+1 << "]" << ":";
        cin >> meuVetor[i];

    }

    cout << "Digite o nome que deseja consultar:";
    cin >> busca;

    for (int i = 0; i <10; i++)
    {
        if (meuVetor[i]== busca)
        {
            achei = true;

        }


    }
    if (achei)
    {
        cout <<"ACHEI";
    }
    else
    {
        cout <<"NÃO ACHEI";

    }


}
