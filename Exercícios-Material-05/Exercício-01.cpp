#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> pilha;
    int opcao, valor;

    do {
        cout << "\n1 - Inserir elemento" << endl;
        cout << "2 - Remover elemento do topo" << endl;
        cout << "3 - Verificar topo" << endl;
        cout << "4 - Verificar se a pilha esta vazia" << endl;
        cout << "5 - Exibir tamanho da pilha" << endl;
        cout << "0 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cout << "Digite um valor: ";
                cin >> valor;
                pilha.push(valor);
                break;

            case 2:
                if(!pilha.empty()) {
                    cout << "Elemento removido: " << pilha.top() << endl;
                    pilha.pop();
                } else {
                    cout << "A pilha esta vazia." << endl;
                }
                break;

            case 3:
                if(!pilha.empty()) {
                    cout << "Topo da pilha: " << pilha.top() << endl;
                } else {
                    cout << "A pilha esta vazia." << endl;
                }
                break;

            case 4:
                if(pilha.empty()) {
                    cout << "A pilha esta vazia." << endl;
                } else {
                    cout << "A pilha nao esta vazia." << endl;
                }
                break;

            case 5:
                cout << "Tamanho da pilha: " << pilha.size() << endl;
                break;

            case 0:
                cout << "Programa encerrado." << endl;
                break;

            default:
                cout << "Opcao invalida." << endl;
        }

    } while(opcao != 0);

    return 0;
}
