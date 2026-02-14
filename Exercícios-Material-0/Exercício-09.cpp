#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int alunobaixo,alunoalto;
    float altura,baixa = 9999,maior =0;

    for (int i = 1; i <=10; i++)
    {
        cout <<"Altura do aluno " << i << ": ";
        cin >>altura;


        if(altura > maior )
        {
            alunoalto = i;
            maior = altura;


        }
        if (altura < baixa)
        {
            alunobaixo=i;
            baixa=altura;

        }


    }
    cout << "Número aluno alto: " << alunoalto << " Altura aluno ALTO: " << maior <<endl;
    cout <<"Número aluno baixo : " << alunobaixo << " Altura aluno BAIXO: " << baixa <<endl;

}
