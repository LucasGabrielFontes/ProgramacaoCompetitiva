//
// Created by lucas on 08/06/2024.
//

// O arquivo .cpp de uma classe e usado para implementar a classe

#include <string>
#include "Personagem.h"

Personagem::Personagem(std::string nome, float velocidade, int vida) {
    this->nome = nome;
    this->velocidade = velocidade;
    this->vida = vida;
}

std::string Personagem::getNome() {
    return this->nome;
}

float Personagem::getVelocidade(){
    return this->velocidade;
}

int Personagem::getVida(){
    return this->vida;
}

void Personagem::setNome(std::string nome){
    this->nome = nome;
}

void Personagem::setVelocidade(float velocidade){
    this->velocidade = velocidade;
}

void Personagem::setVida(int vida){
    this->vida = vida;
}
