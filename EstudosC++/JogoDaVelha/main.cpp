// Autor: Lucas Gabriel Fontes da Silva
// EM DESENVOLVIMENTO

#include <iostream>
#include <fstream>
#include <string>
#include <random>

using namespace std;

int contaLinhasArquivo(ifstream& arquivo);
void preencheVetorPalavras (ifstream& arquivo, string palavras[]);

int main () {

    bool resp = 0; // Armazena a escolha do usuario de continuar ou nao para outra rodada

    do {
        
        string nomeArquivo; // Armazena o nome do arquivo seguido da extensao .txt fornecida pelo usuario
        int linhasArquivo = 0; // Armazena a quantidade total de linhas do arquivo .txt

        cout << "Digite o nome do arquivo, seguido da extensao .txt, que contem as palavras para o jogo da forca (o arquivo deve estar no mesmo diretorio que o programa executavel): ";
        cin >> nomeArquivo;

        ifstream arquivo(nomeArquivo); // Cria o arquivo a partir do nome fornecido pelo usuario

        linhasArquivo = contaLinhasArquivo(arquivo); // Chama a funcao contaLinhasArquivo para receber a quantidade total de linhas do arquivo

        string palavras[linhasArquivo]; // Cria o vetor do tamanho da quantidade de linhas do arquivo .txt que armazera cada uma das palavras contidas nele

        preencheVetorPalavras(arquivo, palavras); // Preenche todo o vetor palavras com cada uma das palavras do arquivo .txt

        random_device random; // Semente para números aleatórios
        mt19937 gen(random()); // Mersenne twister engine inicializado com a semente
        uniform_int_distribution<> distr(0, linhasArquivo - 1); // Distribuicao uniforme entre todo o vetor palavras

        int numeroAleatorio = distr(gen);

        string palavraDaRodada = palavras[numeroAleatorio];

        cout << "Deseja jogar outra vez?\n\n1 - sim\n0 - nao\n";
        cin >> resp;

        while (resp != 0 && resp != 1) {
            cout << "Resposta invalida. Tente novamente: ";
            cin >> resp;
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

        arquivo.close();

    } else {
        cout << "Nao foi possivel abrir o arquivo por algum motivo. Tente novamente.";
    }

    return contadorLinhas;

}

void preencheVetorPalavras (ifstream& arquivo, string palavras[]) {

    string linhaAtual; // Armazena a string contida na linha atual da leitura do arquivo .txt
    int contador = 0; // Índice do vetor palavras

    arquivo.open("Palavras.txt");

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