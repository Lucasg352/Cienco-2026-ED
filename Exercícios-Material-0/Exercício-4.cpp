#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float salario,reajuste;


    cout <<"Digite o salário do funcionário; ";
    cin >> salario;

    cout <<"Salário sem reajuste: R$" << salario <<endl;

    if (salario <1000)
    {
        cout <<"Ajuste de 15%" <<endl;
        reajuste = salario*0.15;


    }
    else if(salario >=1000,salario <=1500)
    {
        cout <<"Ajuste de 10%"<<endl;
        reajuste = salario*0.10;


    }
    else
    {
        cout <<"Ajuste de 5%"<<endl;
        reajuste = salario*0.05;

    }

    cout <<"Salário após reajuste: R$" << reajuste+salario <<endl;
}




