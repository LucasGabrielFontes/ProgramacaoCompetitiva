// Autor: Lucas Gabriel Fontes da Silva
// Jogo da forca em C++, apenas para treinar o básico da sintaxe da linguagem.

#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

int contaLinhasArquivo(ifstream& arquivo);
void preencheVetorPalavras (ifstream& arquivo, string palavras[]);
void mostraPalavraIncompleta (char palavra[], int tam);
void preenchePalavraIncompleta (char palavra[], int tam);
void padronizaPalavraTentativa (string& palavra);

int main () {

    unsigned semente = time(0); // Cria a semente de geracao de numeros aleatorios
    srand(semente); // Cria o gerador de numeros aleatorios com a semente

    bool resp = 0; // Armazena a escolha do usuario de continuar ou nao para outra rodada

    string tema;
    string nomeArquivo; // Armazena o nome do arquivo seguido da extensao .txt fornecida pelo usuario
    int linhasArquivo = 0; // Armazena a quantidade total de linhas do arquivo .txt

    cout << "=============================================================" << endl;
    cout << "                       JOGO DA FORCA                         " << endl;
    cout << "=============================================================" << endl << endl;

    cout << "Digite o nome do arquivo, seguido da extensao .txt, que contem as palavras para o jogo da forca (o arquivo deve estar no mesmo diretorio que o programa executavel): ";
    cin >> nomeArquivo;

    cout << endl << "Digite o tema da rodada: ";
    cin >> tema;

    ifstream arquivo(nomeArquivo); // Cria o arquivo a partir do nome fornecido pelo usuario

    linhasArquivo = contaLinhasArquivo(arquivo); // Chama a funcao contaLinhasArquivo para receber a quantidade total de linhas do arquivo

    string palavras[linhasArquivo]; // Cria o vetor do tamanho da quantidade de linhas do arquivo .txt que armazera cada uma das palavras contidas nele

    preencheVetorPalavras(arquivo, palavras); // Preenche todo o vetor palavras com cada uma das palavras do arquivo .txt

    do {
        
        int vidas = 6;
        bool reutilizarArquivo = 0; // Armazena a opcao do usuario de reutilizar ou nao o arquivo da rodada anterior

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

        int numeroAleatorio = 0 + rand() % linhasArquivo; // Gera o numero aleatorio para a escolha da palavra aleatoria entre as existentes no arquivo fornecido

        string palavraDaRodada = palavras[numeroAleatorio]; // Captura a palavra aleatoria da rodada

        char palavraIncompleta[palavraDaRodada.size() + 1]; // Cria o vetor de char que devera ser preenchido pelo usuario em suas tentativas
        preenchePalavraIncompleta(palavraIncompleta, palavraDaRodada.size()); // Preenche todo o vetor com '_', indicando que a palavra esta totalmente incompleta

        int letrasAdivinhar = palavraDaRodada.size();

        while (vidas > 0) {

            char letraTentativa;

            system("cls");

            cout << "=============================================================" << endl;
            cout << "                       JOGO DA FORCA                         " << endl;
            cout << "=============================================================" << endl << endl;

            cout << endl << "Tema: " << tema << endl;

            cout << endl << "Vidas restantes: " << vidas << endl;

            mostraPalavraIncompleta(palavraIncompleta, palavraDaRodada.size()); // Mostra o estado atual da palavra que deve ser completada

            if (letrasAdivinhar <= 3) {

                string tentativaAdivinharPalavra; // Armazena a tentiva do jogador de adivinhar a palavra completa, quando faltam 3 ou menos letras para completar a palavra

                cout << endl << "Faca um tentativa para adivinhar a palavra completa: ";
                cin >> tentativaAdivinharPalavra;

                padronizaPalavraTentativa(tentativaAdivinharPalavra);

                if (!tentativaAdivinharPalavra.compare(palavraDaRodada)) { // Se as strings forem iguais, o metodo compare() retorna 0

                    for (unsigned i = 0; i < palavraDaRodada.size(); i++) {

                        palavraIncompleta[i] = palavraDaRodada[i];

                    }

                    cout << endl <<"Palavra da rodada: ";
                    mostraPalavraIncompleta(palavraIncompleta, palavraDaRodada.size());
                    cout << endl;

                    cout << endl << "PARABENS! Voce acertou! Hehe." << endl << endl;
                    vidas = 0;

                } else {

                    cout << endl << "IHHHHH, voce perdeu!" << endl;
                    cout << endl << "A palavra era: " << palavraDaRodada << endl << endl;
                    vidas = 0;

                }

            } else {

                cout << endl << "Digite uma letra: ";
                cin >> letraTentativa;

                int testeContem = 0;

                for (unsigned i = 0; i < palavraDaRodada.size(); i++) { // Percorre toda a palavra para indicar se houve acerto ou nao de alguma letra pelo usuario

                    if (tolower(palavraDaRodada[i]) == tolower(letraTentativa)) {
                        palavraIncompleta[i] = palavraDaRodada[i];
                        testeContem++;
                        letrasAdivinhar--;
                    }

                }

                if (!testeContem) {
                    vidas--;
                }

            }

        }

        cout << endl <<"Deseja jogar outra vez?\n\n1 - sim\n0 - nao\n"; // Pergunta se o usuario deseja jogar novamente
        cin >> resp;

        while (resp != 0 && resp != 1) { // Valida a resposta
            cout << "Resposta invalida. Tente novamente: ";
            cin >> resp;
        }

        if (resp) { // Limpa a tela para a próxima rodada
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

void mostraPalavraIncompleta (char palavra[], int tam) {

    for (int i = 0; i < tam; i++) {
        cout << palavra[i];
    }

    cout << endl;

}

void preenchePalavraIncompleta (char palavra[], int tam) {

    int i = 0;

    for (; i < tam; i++) {
        palavra[i] = '_';
    }

    palavra[i] = '\0';

}

void padronizaPalavraTentativa (string& palavra) {

    palavra[0] = toupper(palavra[0]);

    for (unsigned i = 1; i < palavra.size(); i++) {
        palavra[i] = tolower(palavra[i]);
    }

}
