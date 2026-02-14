#include <iostream>
#include <locale>
using namespace std;
int main()

{
    setlocale(LC_ALL, "Portuguese");


    float peso,altura;
    double imc;


    cout <<"Digite o peso:";
    cin >> peso;
    cout <<endl;
    cout <<"Digite a altura:";
    cin >> altura;
    cout <<endl;

    imc = peso/(altura*altura);

    cout << "Seu IMC é de:" << imc;

    cout << endl;

    if (imc <20)
    {
        cout <<" Abaixo do peso"<<endl;


    }
    else if ( imc <25 )
    {
        cout <<"Peso Ideal"<<endl;

    }
    else
    {
        cout <<"Acima do peso"<<endl;
    }


}

