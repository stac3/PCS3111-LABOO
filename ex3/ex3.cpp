#include <iostream>
#include <string>


using namespace std;



class Produto {
public:
    std::string nome = "";
    double preco = 0.0;
    double desconto = 0.0;
    double calcularValorDeVenda();
    void imprimir();
};

double Produto::calcularValorDeVenda() {
    preco = preco - preco * desconto;
    return preco;
}

void Produto::imprimir() {
    std::cout << "Produto : " << nome << " custa " << preco << std::endl;
}


class Pedido {
public:
    Produto *produto1 = nullptr;
    Produto *produto2 = nullptr;
    int quantidade1 = 0;
    int quantidade2 = 0;

    bool adicionar(Produto *produto, int quantidade);
    double calcularPrecoTotal();
    void imprimir();
};

// Implementar os metodos da classe Pedido

void teste1() {
    Produto TV;
    TV.preco = 1000;
    TV.nome = "TV";
    TV.desconto = 0.2;
    TV.preco = TV.calcularValorDeVenda();
    TV.imprimir();
}

void teste2() {
    // Implemente a funcao teste do exercicio 02 segundo o enunciado
}

int main() {
    teste1();
    return 0;
}
