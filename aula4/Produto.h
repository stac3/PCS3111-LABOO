#include <iostream>
#include <string>
   
class Produto {
  private:  
    std::string nome;
    double preco;
  public:
    void setNome(std::string nome);
    std::string getNome();
    void setPreco(double preco);
    double getPreco();
    void imprimir();
      
};