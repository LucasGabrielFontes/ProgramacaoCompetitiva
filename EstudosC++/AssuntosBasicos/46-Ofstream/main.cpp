#include <iostream>
#include <fstream> // Trabalhar com arquivos

using namespace std;

int main() {

    // ofstream: sai do sistema e entra no arquivo
    // ifstream: sai do arquivo e entra no sistema
    // fstream: entra e sai

    ofstream arquivo;

    arquivo.open("teste.txt");
    // Para adicionar novos textos: arquivo.open(teste.txt, ios::app);

    arquivo << "Escrevendo no arquivo\n";
    arquivo << "Escrevendo novamente no arquivo\n";
    arquivo << "Escrevendo novamente 2 no arquivo\n";
    arquivo << "Escrevendo novamente 3 no arquivo\n"; // Todo esse conteudo sera guardado no arquivo

    arquivo.close();

    return 0;
}
