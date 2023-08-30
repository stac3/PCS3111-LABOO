#include "Produto.h"

void Produto::imprimir() {
    std::cout << this->nome << " - " << this->preco << " reais" << std::endl;
}

void Produto::setNome(std::string nome){
    this->nome = nome;
}

void Produto::setPreco(double preco){
    this->preco = preco;
}

double Produto::getPreco(){
    return preco;
}

std::string Produto::getNome(){
    return nome;
}