#include <iostream>
using namespace std;

struct pessoa {
    string nome;
    string endereco;
    string cpf;
    int idade;
};

int main() {
    pessoa p[5];

    for(int i = 0; i < 5; i++) {
        cout << "Pessoa " << i+1 << endl;
        cout << "Nome: ";
        cin >> p[i].nome;
        cout << "Endereco: ";
        cin >> p[i].endereco;
        cout << "CPF: ";
        cin >> p[i].cpf;
        cout << "Idade: ";
        cin >> p[i].idade;
    }

    return 0;
}
