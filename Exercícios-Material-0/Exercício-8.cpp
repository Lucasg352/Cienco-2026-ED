#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int voto = 0, voto1 = 0, voto2 = 0, voto3 = 0, voto4 = 0, totalvotos=0;

    cout <<"Digitar 0 para ENCERRAR"<<endl;
    cout <<"Votação"<<endl;
    cout <<"Voto 1:Canditado 1"<<endl;
    cout <<"Voto 2:Canditado 2"<<endl;
    cout <<"Voto 3:Voto em Branco"<<endl;
    cout <<"Voto 4:Voto Nulo"<<endl;

    do
    {
        cout <<"Entre com o número do Voto:";
        cin >>voto;

        totalvotos+=1;

        if(voto ==0)
        {
            break;


        }
        if(voto == 1)
        {
            voto1+=1;

        }
        else if(voto == 2)
        {
            voto2+=1;
        }
        else if(voto == 3)
        {
            voto3+=1;

        }
        else if (voto==4)
        {
            voto4+=1;
        }
        else
        {
            cout <<"VOTO INVÁLIDO"<<endl;
        }

    }
    while(true);


    cout <<"" <<endl;
    cout <<"Percentual de voto Canditato 1: "<< (voto1*100)/totalvotos << "%" <<endl;
    cout <<"Percentual de voto Canditato 2: "<< (voto2*100)/totalvotos << "%" <<endl;
    cout <<"Percentual de votos Nulos 1: "<< (voto3*100)/totalvotos << "%" <<endl;
    cout <<"Percentual de votos em Branco: "<< (voto4*100)/totalvotos << "%" <<endl;



}

