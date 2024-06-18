#include "iostream"
#include "vector"
#include "map"

using namespace std;

class Estudante {
public:
    string nome;
    string matricula;
    int idade;
};

int main () {

    int idade{19}; // int num = 10;
    string nome{"Lucas"}; // string nome = "Lucas";
    vector<int> numeros {1, 2, 3, 4, 5};
    map<string, int> nomesIdades {{"Lucas", 19}, {"Gabriel", 55}};

    Estudante estudante{"Lucas Gabriel Fontes da Silva", "20232257898", 19}; // Nem precisa criar/usar um metodo construtor

    cout << "Estudante: " << estudante.nome << "\nMatricula: " << estudante.matricula << "\nIdade: " << estudante.idade << endl;

    cout << nome << ": " << idade << endl;

    return 0;

}