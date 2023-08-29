#include <iostream>
using namespace std;

class Pessoa{//definição de "molde" para Pessoas
  public: //modificador de Acesso
    int idade; //Atributo de idade;
    string nome; // atributo de nome;  
};

int main() { 
  Pessoa pessoal; //cria um objeto da classe pessoa
  pessoal.idade =15; //Muda a idade de pessoal
  pessoal.nome = "john"; //Muda o nome pessoal

  cout <<pessoal.nome << " tem " << pessoal.idade << " anos";
  return 0;
}