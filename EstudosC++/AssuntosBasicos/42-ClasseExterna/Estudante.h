#ifndef INC_42_CLASSEEXTERNA_ESTUDANTE_H
#define INC_42_CLASSEEXTERNA_ESTUDANTE_H

#include <string>

class Estudante {

public:
    std::string nome;
    std::string matricula;

    Estudante (std::string nome, std::string matricula, std::string CPF);

    std::string toString();

    std::string getNome() {
        return this->nome;
    }

    void setNome (std::string nome) {
        this->nome = nome;
    }

    std::string getMatricula () {
        return this->matricula;
    }

    void setMatricula (std::string matricula) {
        this->matricula = matricula;
    }

    std::string getCPF () {
        return this->CPF;
    }

    void setCPF (std::string CPF){
        this->CPF = CPF;
    }

    float getCRA () {
        return this->CRA;
    }

    void setCRA (float CRA) {
        this->CRA = CRA;
    }

private:
    std::string CPF;
    float CRA;

};

Estudante::Estudante(std::string nome, std::string matricula, std::string CPF) {
    this->setNome(nome);
    this->setMatricula(matricula);
    this->setCPF(CPF);
}

std::string Estudante::toString() {
    return "Estudante: " + this->getNome() + "\nMatricula: " + this->getMatricula();
}

#endif //INC_42_CLASSEEXTERNA_ESTUDANTE_H
