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

bool Pedido::adicionar(Produto *produto, int quantidade) {
    if(produto1 == nullptr){
        produto1 = produto;
        quantidade1 = quantidade;
        return true;
    }
    else{
        if(produto2 == nullptr){
            produto2 = produto;
            quantidade2 = quantidade;
            return true;
        }
        else{
            return false;
        }
    }
}

double Pedido::calcularPrecoTotal() {

    return ((produto1->preco * quantidade1) + (produto2->preco * quantidade2));
}

void Pedido::imprimir() {
    std::cout << " Pedido: Preco Total : " << calcularPrecoTotal() << std::endl;
}



void teste1() {
    Produto TV;
    TV.preco = 1000;
    TV.nome = "TV";
    TV.desconto = 0.2;
    TV.preco = TV.calcularValorDeVenda();
    TV.imprimir();
}

void teste2() {
    Produto TV;
    TV.preco = 1000;
    TV.nome = "TV";
    TV.desconto = 0.2;
    TV.preco = TV.calcularValorDeVenda();
    TV.imprimir();
    
    Produto suporteTV;
    suporteTV.preco = 150;
    suporteTV.nome = "Suporte TV";
    suporteTV.desconto = 0.05;
    suporteTV.preco = TV.calcularValorDeVenda();
    suporteTV.imprimir();

    Pedido pedido;
    pedido.adicionar(&TV, 1);
    pedido.adicionar(&suporteTV, 2);
    pedido.calcularPrecoTotal();
    pedido.imprimir();

}

int main() {
    teste2();
    return 0;
}
