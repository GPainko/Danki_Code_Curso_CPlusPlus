#include <iostream>
using namespace std;

class Pessoa{
  public:
    string nome;
    int idade;

    Pessoa(){
      printf("pessoa criada sem nome\n");
    }
    
    Pessoa(string nomeNovo){
      printf("Pessoa criada com nome \n");
      nome = nomeNovo;
    }

    Pessoa(int idadeNovo){
      printf("Pessoa criada com nome \n");
      idade = idadeNovo;
    }

    Pessoa(string nomeNovo,int idadeNovo){
      printf("Pessoa criada com nome \n");
      nome = nomeNovo;
      idade = idadeNovo;
    }
};

int main() {
  Pessoa pessoa1;
  cout << "Pessoa1: " << pessoa1.nome<< "," << pessoa1.idade << "\n";
  Pessoa pessoa2("Jonh");
  cout << "Pessoa2: " << pessoa2.nome<< "," << pessoa2.idade << "\n";
  Pessoa pessoa3(20);
  cout << "Pessoa3: " << pessoa3.nome<< "," << pessoa3.idade << "\n";
  Pessoa pessoa4("Mario",26);
  cout << "Pessoa4: " << pessoa4.nome<< "," << pessoa4.idade << "\n";
 
}