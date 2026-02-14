#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int n=0;


    do
    {
        cout <<"Digite 0 para FINALIZAR:";
        cin >> n;
        if(n ==0)
        {
            break;

        }

        switch(n)
        {

        case 1:
            cout <<"Opção 1 selecionada"<<endl;

            break;

        case 2:
            cout <<"Opção 2 selecionada"<<endl;
            break;

        case 3:
            cout <<"Opção 3 selecionada"<<endl;
            break;

        default:
            cout <<"Opção INVÁLIDA"<<endl;


        }


    }
    while(true);

    cout <<"Programa FINALIZADO";

}
