#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float preco,vendafinal;
    int condicao;

    cout <<"Preço da etiqueta RS$:";
    cin >> preco;

    cout <<"Digite o código da condição do Produto(1,2,3,4): ";
    cin >> condicao;

    switch(condicao)
    {
    case 1:
        cout <<"Á vista em dinheiro ou cheque,10% de desconto" <<endl;
        vendafinal=preco*0.90;
        cout <<"Preço da etiqueta R$:" << preco <<endl;
        cout <<"Preço com desconto R$:" << vendafinal;
        break;

    case 2:
        cout <<"Á vista com Cartão de Crédito,5% de desconto" <<endl;
        vendafinal=preco*0.95;
        cout <<"Preço da etiqueta R$:" << preco <<endl;
        cout <<"Preço com desconto R$:" << vendafinal;
        break;

    case 3:
        vendafinal=preco/2;
        cout <<"Em 2 vezes,preço normal de etiqueta sem juros" <<endl;
        cout <<"Preço da etiqueta R$:" << preco <<endl;
        cout <<"Preço de cada parcela(2 vezes) R$:" << vendafinal;
        break;

    case 4:
        vendafinal=preco*1.10;
        cout <<"Em 3 vezes,preço de etiqueta com acréscimo de 10%" <<endl;
        cout <<"Preço da etiqueta R$:" << preco*1.10 <<endl;
        cout <<"Preço de cada parcela(3 vezes) R$:" << vendafinal/3;
        break;

    default:
        cout <<"OPÇÃO INVÁLIDA";


    }


}
