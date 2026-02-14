#include <iostream>
#include <locale>

using namespace std;

int main()
{
setlocale(LC_ALL,"Portuguese");
int hora,horatrabalhada;
float salariomin,salariobruto,imposto,salariofinal;

    cout <<"Quantidade de horas que irão ser trabalhadas: ";
    cin >> hora;

    cout <<"Valor do salário minimo: ";
    cin >>salariomin;

horatrabalhada = salariomin/2;
salariobruto = hora*horatrabalhada;
imposto = salariobruto*0.03;
salariofinal = salariobruto-imposto;


cout << "hora trabalhada: " << horatrabalhada <<endl;
cout <<"Salário bruto: " << salariobruto <<endl;
cout <<"Imposto: " << imposto <<endl;
cout <<"salariofinal: " << salariofinal <<endl;




cout <<"Salário a receber: " << salariofinal;

}
