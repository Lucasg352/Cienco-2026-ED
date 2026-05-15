#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    list<string> funcionarios;
    int quantidade;
    string nome;

    cout << "Quantos funcionarios deseja cadastrar? ";
    cin >> quantidade;

    cin.ignore();

    if(quantidade == 0) {
        cout << "A lista esta vazia." << endl;
    } else {

        for(int i = 0; i < quantidade; i++) {
            cout << "Digite o nome do funcionario: ";
            getline(cin, nome);

            funcionarios.push_back(nome);
        }

        cout << "\nLista na ordem de cadastro:" << endl;

        for(string f : funcionarios) {
            cout << f << endl;
        }

        funcionarios.sort();

        cout << "\nLista ordenada:" << endl;

        for(string f : funcionarios) {
            cout << f << endl;
        }

        cout << "\nLista reversa:" << endl;

        for(auto it = funcionarios.rbegin(); it != funcionarios.rend(); it++) {
            cout << *it << endl;
        }

        cout << "\nQuantidade de funcionarios cadastrados: ";
        cout << funcionarios.size() << endl;
    }

    return 0;
}
