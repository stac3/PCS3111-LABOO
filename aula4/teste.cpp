#include <iostream>
#include "Pedido.h"

void teste1() {
    Produto escova;
    escova.setNome("Escova de dentes");
    escova.setPreco(5.49);
    escova.imprimir();

}

void teste2() {
    Pedido pedido;
    Produto agua;
    agua.setNome("Agua");
    agua.setPreco(4.90);
    Produto desodorante;
    desodorante.setNome("Desodorante");
    desodorante.setPreco(15.59);
    pedido.adicionar(&agua);
    pedido.adicionar(&desodorante);
    pedido.imprimir();
}

int main() {
    teste2();
    return 0;
}
