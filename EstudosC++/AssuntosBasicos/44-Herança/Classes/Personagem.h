//
// Created by lucas on 08/06/2024.
//

// O arquivo .h de uma classe e usado para declarar a classe

#ifndef INC_44_HERANÇA_PERSONAGEM_H
#define INC_44_HERANÇA_PERSONAGEM_H

#include <string>

class Personagem {

public:
    std::string nome;

    // Metodo construtor
    Personagem(std::string nome, float velocidade, int vida);

    // Metodos get e set
    std::string getNome();
    float getVelocidade();
    int getVida();
    void setNome(std::string noem);
    void setVelocidade(float velocidade);
    void setVida(int vida);

private:
    float velocidade;
    int vida;

};


#endif //INC_44_HERANÇA_PERSONAGEM_H
