//
// Created by lucas on 08/06/2024.
//

#ifndef INC_43_GETSET_PEDIDO_H
#define INC_43_GETSET_PEDIDO_H

#include <string>

class Pedido {

public:
    std::string codigoPedido;
    std::string numCliente;
    std::string codigoPizza;

    // Metodo construtor
    Pedido(std::string codigoPedido, std::string numCliente, std::string codigoPizza, std::string CPF) {
        this->setCodigoPedido(codigoPedido);
        this->setNumCliente(numCliente);
        this->setCodigoPizza(codigoPizza);
        this->setCPF(CPF);
    }

    // Metodos get e set
    std::string getCodigoPedido(){
        return this->codigoPedido;
    }

    void setCodigoPedido(std::string codigoPedido) {

        if (std::stoi(codigoPedido) < 1) {
            std::cout << "Codigo do pedido invalido, meu patrao!" << std::endl;
        } else {
            this->codigoPedido = codigoPedido;
        }

    }

    std::string getNumCliente(){
        return this->numCliente;
    }

    void setNumCliente(std::string numCliente) {

        if (std::stoi(numCliente) < 1) {
            std::cout << "Numero do cliente invalido, meu patrao!" << std::endl;
        } else {
            this->numCliente = numCliente;
        }

    }

    std::string getCodigoPizza() {
        return this->codigoPizza;
    }

    void setCodigoPizza(std::string codigoPizza){

        if (std::stoi(codigoPizza) < 1) {
            std::cout << "Codigo da pizza invalido, meu patrao!" << std::endl;
        } else {
            this->codigoPizza = codigoPizza;
        }

    }

    std::string getCPF(){
        return this->CPF;
    }

    void setCPF (std::string CPF) {

        if (std::stoi(CPF) < 1) {
            std::cout << "CPF invalido, meu patrao!" << std::endl;
        } else {
            this->CPF = CPF;
        }

    }

private: // So podem ser manipulados pela classe
    std::string CPF;

};

#endif //INC_43_GETSET_PEDIDO_H
