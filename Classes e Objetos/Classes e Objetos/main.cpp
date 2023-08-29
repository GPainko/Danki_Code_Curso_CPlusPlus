#include <iostream>
using  namespace std;

class Cookie{    //definição do "molde para Cookies"
  public:    // modificador de Acesso
    float preco;  //Atributo de Preço
    string sabor;   //Atributo de sabor
    string formato; // atributo da forma
};

int main() {
  Cookie cookie1;
  cookie1.preco = 15.35;
  cookie1.sabor = "chocolate";
  cookie1.formato = "soldadinho";

  Cookie cookie2;
  cookie2.preco = 20.35;
  cookie2.sabor = "flocos";
  cookie2.formato = "bengala";

  Cookie cookie3;
  cookie3.preco = 16.35;
  cookie3.sabor = "Morango";
  cookie3.formato = "Morango";
  
  cout << "Cookie de " << cookie1.sabor;
  cout << " custa R$"<<cookie1.preco;
  cout << " possue formato de "<<cookie1.formato<<"\n";
  cout << "Cookie de " << cookie2.sabor;
  cout << " custa R$"<<cookie2.preco;
  cout << " possue formato de "<<cookie2.formato<<"\n";
  cout << "Cookie de " << cookie3.sabor;
  cout << " custa R$"<<cookie3.preco;
  cout << " possue formato de "<<cookie3.formato<<"\n";
}