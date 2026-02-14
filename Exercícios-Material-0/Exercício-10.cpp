#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");


    int idade=0,nota=0,somaidade=0,pessoas=0;
    int nota1,nota2,nota3,nota4;


    cout <<"Pesquisa de avaliação sobre o filme"<<endl;
    cout <<"Digitar um número NEGATIVO na idade para FINALIZAR"<<endl;


    do
    {


        cout <<"Idade: ";
        cin >> idade;

        if (idade <0)
        {
            cout <<"Pesquisa FINALIZADA" <<endl;
            break;

        }

        cout <<"Nota:";
        cin >>nota;

        pessoas +=1;
        somaidade+=idade;

        if(nota ==1)
        {
            cout <<"Nota ÓTIMA"<<endl;
            nota1+=1;


        }
        else if(nota ==2)
        {
            cout <<"Nota BOM"<<endl;
            nota2+=1;


        }
        else if(nota ==3)
        {
            cout <<"Nota REGULAR"<<endl;
            nota3+=1;

        }
        else if(nota ==4)
        {
            cout <<"Nota RUIM" <<endl;
            nota4+=1;

        }
        else
        {
            cout <<"nota INVÁLIDA"<<endl;


        }


    }
    while(true);

    cout <<"Quantidade de pessoas participantes da pesquisa; " << pessoas <<endl;
    cout <<"Média da idade de pessoas que responderam: " << somaidade/pessoas <<endl;
    cout <<"Porcentagem de nota ÓTIMA:" << (nota1*100.0)/pessoas <<endl;
    cout <<"Porcentagem de nota BOM:" << (nota2*100.0)/pessoas <<endl;
    cout <<"Porcentagem de nota REGULAR:" << (nota3*100.0)/pessoas <<endl;
    cout <<"Porcentagem de nota RUIM:" << (nota4*100.0)/pessoas <<endl;



}
