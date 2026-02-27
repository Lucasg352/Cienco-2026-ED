#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int N;

    cout <<"Digite o tamanho do vetor: ";
    cin >> N;

    int A[N],B[N],soma[N];

    cout <<"\nPreencher o vetor A" <<endl;

    for (int i = 0; i < N; i++)
    {
        cout <<"Digite um número para o vetor A: ";
        cin >> A[i];

    }

    cout <<"\nPrencher o vetor B" <<endl;

    for (int i = 0; i < N; i++)
    {
        cout <<"Digite um número para o vetor B: ";
        cin >> B[i];


    }
    for (int i = 0; i < N; i++)
    {
        soma[i] = A[i] + B[i];
    }

    cout <<"\nSoma dos vetores A e B" <<endl;
    for (int i = 0; i < N; i++)
    {
        cout << "[" << soma[i] << "]" <<endl;

    }



}
