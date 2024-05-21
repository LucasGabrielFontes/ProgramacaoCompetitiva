// Autor: Lucas Gabriel Fontes da Silva
// EM DESENVOLVIMENTO

#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

int contaLinhasArquivo(ifstream& arquivo);
void preencheVetorPalavras (ifstream& arquivo, string palavras[]);
void mostraComprimentoPalavra (string palavra);

int main () {

    unsigned semente = time(0);
    srand(semente);

    bool resp = 0; // Armazena a escolha do usuario de continuar ou nao para outra rodada

    string nomeArquivo; // Armazena o nome do arquivo seguido da extensao .txt fornecida pelo usuario
    int linhasArquivo = 0; // Armazena a quantidade total de linhas do arquivo .txt

    cout << "=============================================================" << endl;
    cout << "                       JOGO DA FORCA                         " << endl;
    cout << "=============================================================" << endl << endl;

    cout << "Digite o nome do arquivo, seguido da extensao .txt, que contem as palavras para o jogo da forca (o arquivo deve estar no mesmo diretorio que o programa executavel): ";
    cin >> nomeArquivo;

    ifstream arquivo(nomeArquivo); // Cria o arquivo a partir do nome fornecido pelo usuario

    linhasArquivo = contaLinhasArquivo(arquivo); // Chama a funcao contaLinhasArquivo para receber a quantidade total de linhas do arquivo

    string palavras[linhasArquivo]; // Cria o vetor do tamanho da quantidade de linhas do arquivo .txt que armazera cada uma das palavras contidas nele

    preencheVetorPalavras(arquivo, palavras); // Preenche todo o vetor palavras com cada uma das palavras do arquivo .txt

    do {
        
        bool reutilizarArquivo = 0;

        if (resp) {

            cout << "=============================================================" << endl;
            cout << "                       JOGO DA FORCA                         " << endl;
            cout << "=============================================================" << endl << endl;

            cout << endl << "Voce deseja utilizar o mesmo arquivo de palavras para essa nova rodada?" << endl << endl << "1 - sim" << endl << "0 - nao" << endl;
            cin >> reutilizarArquivo;

            while (reutilizarArquivo != 1 && reutilizarArquivo != 0) {
                cout << "Resposta invalida! Tente novamente: ";
                cin >> reutilizarArquivo;
            }

            if (!reutilizarArquivo) {

                cout << "Digite o nome do arquivo, seguido da extensao .txt, que contem as palavras para o jogo da forca (o arquivo deve estar no mesmo diretorio que o programa executavel): ";
                cin >> nomeArquivo;

                ifstream arquivo(nomeArquivo); // Cria o arquivo a partir do nome fornecido pelo usuario

                linhasArquivo = contaLinhasArquivo(arquivo); // Chama a funcao contaLinhasArquivo para receber a quantidade total de linhas do arquivo

                string palavras[linhasArquivo]; // Cria o vetor do tamanho da quantidade de linhas do arquivo .txt que armazera cada uma das palavras contidas nele

                preencheVetorPalavras(arquivo, palavras); // Preenche todo o vetor palavras com cada uma das palavras do arquivo .txt

            }

        }

        int numeroAleatorio = 0 + rand() % linhasArquivo;

        string palavraDaRodada = palavras[numeroAleatorio];

        cout << palavraDaRodada << endl;

        mostraComprimentoPalavra(palavraDaRodada);

        cout << "Deseja jogar outra vez?\n\n1 - sim\n0 - nao\n";
        cin >> resp;

        while (resp != 0 && resp != 1) {
            cout << "Resposta invalida. Tente novamente: ";
            cin >> resp;
        }

        if (resp) {
            system("cls");
        }

    } while (resp);

    return 0;

}

int contaLinhasArquivo(ifstream& arquivo) {

    string linhaAtual; // Armazena a string contida na linha atual da leitura do arquivo .txt
    int contadorLinhas = 0; // Conta a quantidade de linhas

    if (arquivo.is_open()) {

        while (getline(arquivo, linhaAtual)) {

            contadorLinhas++;

        }

    } else {
        cout << "Nao foi possivel abrir o arquivo por algum motivo. Tente novamente.";
    }

    return contadorLinhas;

}

void preencheVetorPalavras (ifstream& arquivo, string palavras[]) {

    string linhaAtual; // Armazena a string contida na linha atual da leitura do arquivo .txt
    int contador = 0; // Índice do vetor palavras

    arquivo.clear(); // Limpa o objeto ifstream
    arquivo.seekg(0, ios::beg); // Redefine a posição para o início do arquivo

    if (arquivo.is_open()) {

        while (getline(arquivo, linhaAtual)) {

            palavras[contador] = linhaAtual;
            contador++;

        }

        arquivo.close();

    } else {
        cout << "Nao foi possivel abrir o arquivo por algum motivo. Tente novamente." << endl;
    }

}

void mostraComprimentoPalavra (string palavra) {

    int tamanhoPalavra = palavra.size();

    for (int i = 0; i < tamanhoPalavra; i++) {
        cout << "_";
    }

    cout << endl;

}