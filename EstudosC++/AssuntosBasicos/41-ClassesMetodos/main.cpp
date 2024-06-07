#include <iostream>

using namespace std;

class Estudante {

public:
    string nome;
    string matricula;

    void setCPF (string setCPF) {
        this->CPF = setCPF;
    }

    string getCPF () {
        return this->CPF;
    }

    static string metodoComplexo();

private:
    string CPF;
    float CRA;

};

string Estudante::metodoComplexo() {
    return "Metodo complexo que precisa ser implementado fora do codigo da classe";
}

int main() {

    Estudante *estudante = new Estudante();

    estudante->nome = "Lucas Gabriel Fontes da Silva";

    estudante->setCPF("12345478985");

    cout << "Estudante: " << estudante->nome << endl;
    cout << "CPF: " << estudante->getCPF() << endl;
    cout << "Chamada para metodo complexo: " << estudante->metodoComplexo() << endl;

    return 0;
}
