//
// Created by lucas on 08/06/2024.
//

#ifndef INC_44_HERANÇA_CANGURU_H
#define INC_44_HERANÇA_CANGURU_H


#include "Personagem.h"

class Canguru: public Personagem {

public:
    float alturaSalto;

    Canguru(std::string nome, float velocidade, int vida, float alturaSalto);

};


#endif //INC_44_HERANÇA_CANGURU_H
