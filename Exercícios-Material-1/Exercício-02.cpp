#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int alunos,alunoAcima;
    float notas[20], mediaNotas,somaNotas;


    for (int i = 0; i <20; i++)
    {
        cout << "Digite a nota do aluno"<< "[" << i+1 << "]" << ":";
        cin >> notas[i];
        alunos+=1;
        somaNotas+=notas[i];
    }

    mediaNotas = somaNotas/alunos;

    for (int i = 0; i < 20; i++)
    {
        if (notas[i]> mediaNotas)
        {
            alunoAcima+=1;
        }


    }

    cout <<"Média da turma: " << mediaNotas << endl;
    cout <<"Alunos acima da média: " << alunoAcima;
}
