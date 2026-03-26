#include <iostream>
using namespace std;

struct Endereco {
    string rua;
    string cidade;
    string cep;
};

typedef Endereco TipoEndereco;

int main() {
    TipoEndereco e;

    cout << "Rua: ";
    cin >> e.rua;
    cout << "Cidade: ";
    cin >> e.cidade;
    cout << "CEP: ";
    cin >> e.cep;

    cout << "\nEndereco informado:\n";
    cout << e.rua << ", " << e.cidade << " - " << e.cep << endl;

    return 0;
}
