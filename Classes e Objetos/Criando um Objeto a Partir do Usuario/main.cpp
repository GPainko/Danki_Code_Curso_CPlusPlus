#include <iostream>
#include <ios>
#include <limits>
using  namespace std;

class Cookie{    //definição do "molde para Cookies"
  public:    // modificador de Acesso
    float preco;  //Atributo de Preço
    string sabor;   //Atributo de sabor
    string formato; // atributo da forma
};

int main() {
  
  Cookie cookie1;
  
  cout << "digite o sabor do cookie:" ;
  cin.sync();
  getline(cin,cookie1.sabor);
  
  cout << " o valor do cookie em R$";
  cin >>cookie1.preco;

  cout<< "o cookie de "<< cookie1.sabor<< " custa R$: "<<cookie1.preco;
}