#include <iostream>

using namespace std;

int main()
{
    int nota=0,somanota=0,alunos=0;
    float media=0;
    cout <<"Digitar um valor NEGATIVO para finalizar"<<endl;


    do
    {
        cout <<"Digite a nota:";
        cin >> nota;
        alunos+=1;
        somanota+=nota;


    }
    while(nota>=0);
    alunos= alunos-1;
    media = somanota/alunos;

    cout <<"Contagem finalizada"<<endl;
    cout <<"Total de alunos: " << alunos <<endl;
    cout <<"Media de notas: " << media;

}
