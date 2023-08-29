#include <iostream>
using namespace std;

class Pessoa{  //definição do "molde" para pessoa
  public:      //modificador de acesso
    string nome;  //atributo de nome
    //metodo construtor e inicializado quando a class e criada
    Pessoa(string nomeNovo){
      printf("Pessoa criada com nome\n");
      nome = nomeNovo;
    }
    //metodo que imprime uma frase na tela
    void fala(string frase){
      cout << nome << "diz: "<<frase;
    }
    //metodo que faz a pessoa gritar
    void grita(){
      cout <<"AAAHHHH";
    }
};

int main(){
  Pessoa pessoa1("Mario ");
  pessoa1.fala("e ai galera ");
  pessoa1.grita();
  return 0 ;
}