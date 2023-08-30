#include "Produto.h"
#define MAXIMO_DE_PRODUTOS 10

class Pedido {
    private: 
        
        int quantidade = 0;            

    public:
        Produto *arrayDeProdutos[MAXIMO_DE_PRODUTOS];  

        bool adicionar(Produto* produto);
        double getPrecoTotal();
        void imprimir();
};