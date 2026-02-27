#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float temp[365], soma = 0, media, menor, maior;
    int abaixo = 0;

    cout << "Digite a temperatura media de cada dia do ano:" << endl;
    for (int i = 0; i < 365; i++)
    {
        cout << "Dia " << i+1 << ": ";
        cin >> temp[i];
        soma += temp[i];
    }

    menor = temp[0];
    maior = temp[0];
    for (int i = 0; i < 365; i++)
    {
        if (temp[i] < menor) menor = temp[i];
        if (temp[i] > maior) maior = temp[i];
    }

    media = soma / 365;

    for (int i = 0; i < 365; i++)
    {
        if (temp[i] < media) abaixo++;
    }

    cout << "\nMenor temperatura: " << menor << endl;
    cout << "Maior temperatura: " << maior << endl;
    cout << "Temperatura media anual: " << media << endl;
    cout << "Dias abaixo da media: " << abaixo << endl;




}





