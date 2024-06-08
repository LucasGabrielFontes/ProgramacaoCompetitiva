//
// Created by lucas on 08/06/2024.
//

#include "Canguru.h"

Canguru::Canguru(std::string nome, float velocidade, int vida, float alturaSalto): Personagem(nome, velocidade, vida) { // Passa alguns parametros para o construtor da classe mae

    this->alturaSalto = alturaSalto;

}
