#include <iostream>
#include <locale>


using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int n;

    cout <<"Digite um número para verificar se é PAR ou IMPAR:";
    cin >> n;
    if (n % 2 ==0)
    {
        cout <<"Número é PAR!";

    }
    else
    {

        cout <<"Número é IMPAR";

    }



}
