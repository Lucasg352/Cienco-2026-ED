#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<string> fila;
    int opcao;
    string nome;

    do {
        cout << "\n1 - Inserir cliente na fila" << endl;
        cout << "2 - Atender proximo cliente" << endl;
        cout << "3 - Exibir fila de espera" << endl;
        cout << "4 - Encerrar programa" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        cin.ignore();

        switch(opcao) {

            case 1:
                cout << "Digite o nome do cliente: ";
                getline(cin, nome);

                fila.push(nome);

                cout << "Cliente adicionado na fila." << endl;
                break;

            case 2:
                if(!fila.empty()) {
                    cout << "Atendendo cliente: " << fila.front() << endl;
                    fila.pop();
                } else {
                    cout << "A fila esta vazia." << endl;
                }
                break;

            case 3:
                if(fila.empty()) {
                    cout << "A fila esta vazia." << endl;
                } else {

                    queue<string> copia = fila;

                    cout << "Fila de espera:" << endl;

                    while(!copia.empty()) {
                        cout << copia.front() << endl;
                        copia.pop();
                    }
                }
                break;

            case 4:
                cout << "Programa encerrado." << endl;
                break;

            default:
                cout << "Opcao invalida." << endl;
        }

    } while(opcao != 4);

    return 0;
}
