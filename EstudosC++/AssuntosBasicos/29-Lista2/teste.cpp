#include <iostream>
#include <list>

using namespace std;

bool procuraElementoVetor (string tiposValidos[], int tam, string tipo);

int main () {

    list <int> lista(10, 0); // Cria uma lista de 10 elementos inicializados com 0

    int resp;

    do {

        system("cls");

        cout << "Lista atual: " << endl << endl;

        list <int>:: iterator iterador;

        for (iterador = lista.begin(); iterador != lista.end(); iterador++) {
            cout << *iterador << endl;
        }

        int pos;

        cout << endl << "Digite a posicao que voce deseja adicionar um numero (as posicoes sao contadas a partir do 1): ";
        cin >> pos;
        
        while (pos < 1 || pos > 10) {
            cout << endl << "Posicao invalida. Tente novamente: ";
            cin >> pos;
        }

        int num;

        cout << endl << "Digite o numero que deseja adicionar: ";
        cin >> num;

        iterador = lista.begin();
        advance(iterador, pos-1);
        lista.insert(iterador, num);
        
        cout << endl << "Nova lista: " << endl << endl;

        for (iterador = lista.begin(); iterador != lista.end(); iterador++) {
            cout << *iterador << endl;
        }

        cout << endl << "Deseja fazer outra alteracao?" << endl << endl << "1- Sim" << endl << "0- Nao" << endl << endl << "Escolha uma opcao: ";
        cin >> resp;

        while (resp != 0 && resp != 1) {

            cout << endl << "Opcao invalida. Tente novamente: ";
            cin >> resp;

        }

    } while (resp != 0);

    return 0;

}

/*
bool procuraElementoVetor (string tiposValidos[], int tam, string tipo) {

    for (int i = 0; i < tipo.size(); i++) {
        tipo[i] = tolower(tipo[i]);
    }

    return find(tiposValidos, tiposValidos + tam, tipo) != tiposValidos + tam;

}
*/