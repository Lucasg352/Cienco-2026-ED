#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");


    int meuVetor[20];

    for (int i =0; i <20; i++)
    {
        cout <<"Dgite o número: ";
        cin >> meuVetor[i];

    }

    cout <<"Ordem Inversa" <<endl;

    for (int i = 19; i>=0; i--)
    {
        cout << "[" << meuVetor[i] << "]" <<endl;
    }



}
