#include <iostream>
using namespace std;

class Cookie{ // definição do "molde" para cookie"
  public:     // modificação de acesso
    float preco; //atributo de preço
    string sabor; //atributo de sabor
    string formato; // atributo de formato

  //metodo construtor e inicializado quando a class e criada
    Cookie(){
      printf("cookie criado \n");
      formato = "Redondo";//Já inicializa o formato como redodndo
    }
};

int main() {
  Cookie cookie1;
  cookie1.preco = 15.36;
  cookie1.sabor = "chocolate";

  cout << "cookie: " << cookie1.sabor;
  cout << " custa R$; " << cookie1.preco;
  cout << " formato: " <<cookie1.formato <<"\n";
}