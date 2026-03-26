#include <iostream>
using namespace std;

struct Animal {
    string nome;
    string especie;
    int idade;
    float peso;
};

typedef Animal ListaAnimais[10];

int main() {
    ListaAnimais lista;

    for(int i = 0; i < 10; i++) {
        cout << "\nAnimal " << i+1 << endl;
        cout << "Nome: ";
        cin >> lista[i].nome;
        cout << "Especie: ";
        cin >> lista[i].especie;
        cout << "Idade: ";
        cin >> lista[i].idade;
        cout << "Peso: ";
        cin >> lista[i].peso;
    }

    cout << "\n--- Dados dos animais ---\n";
    for(int i = 0; i < 10; i++) {
        cout << "\nAnimal " << i+1 << endl;
        cout << "Nome: " << lista[i].nome << endl;
        cout << "Especie: " << lista[i].especie << endl;
        cout << "Idade: " << lista[i].idade << endl;
        cout << "Peso: " << lista[i].peso << endl;
    }

    return 0;
}
