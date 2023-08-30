#include "Pedido.h"
using namespace std;

bool Pedido::adicionar(Produto *produto){
    if(quantidade >= MAXIMO_DE_PRODUTOS || !produto){
        return false;
    }
    for(int i=0; i< quantidade; i++){
        if (arrayDeProdutos[i] == produto)
        {
            return false;
        }
        
    }
    arrayDeProdutos[quantidade++] = produto;
    return true;
    
}

double Pedido::getPrecoTotal(){
    double soma = 0;
    for(int i = 0; i < quantidade; i++){
        soma = soma + arrayDeProdutos[i]->getPreco();
    }
    return soma;
}

void Pedido::imprimir() {
    cout << "Pedido com " << quantidade << " produtos " << getPrecoTotal() << " reais no total" << endl;
    for(int i = 0; i < quantidade; i++){
        arrayDeProdutos[i]->imprimir();
    }
}
