#include <iostream>
#include <fstream> // Trabalhar com arquivos

using namespace std;

int main() {

    ofstream arquivo;

    arquivo.open("teste.txt");
    // Para adicionar novos textos: arquivo.open(teste.txt, ios::app);

    arquivo << "Escrevendo no arquivo\n";
    arquivo << "Escrevendo novamente no arquivo\n";
    arquivo << "Escrevendo novamente 2 no arquivo\n";
    arquivo << "Escrevendo novamente 3 no arquivo\n"; // Todo esse conteudo sera guardado no arquivo

    arquivo.close();

    ifstream arquivoIn;
    arquivoIn.open("teste.txt");
    string conteudoLinha;

    if (arquivoIn.is_open()) {

        while (getline(arquivoIn, conteudoLinha)) {

            cout << conteudoLinha << endl;

        }

        arquivoIn.close();

    } else {
        cout << "Ocorreu um erro com a abertura do arquivo, meu patrao!" << endl;
    }

    return 0;
}
