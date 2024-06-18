#include <iostream>
#include <fstream> // Trabalhar com arquivos

using namespace std;

int main() {

    fstream arquivo; // E possivel utilizar o mesmo objeto para a entrada e saida de dados
    string conteudo;

    arquivo.open("testando.txt", ios::out); // ios::out configura o arquivo para receber informacoes
    getline(cin, conteudo);
    arquivo << conteudo << "\n";

    arquivo.close();

    arquivo.open("testando.txt", ios::in); // ios::in configura o arquivo para fornecer informacoes

    if (arquivo.is_open()) {

        string conteudo;
        getline(arquivo, conteudo);

        cout << conteudo << endl;

        arquivo.close();

    } else {

        cout << "Ocorreu um erro ao tentar abrir o arquivo" << endl;

    }

    return 0;
}
