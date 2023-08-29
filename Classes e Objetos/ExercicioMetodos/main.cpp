#include <iostream>
using namespace std;

class Pessoa{
  public:
    string nome;
    int idade;
    float salario;

    Pessoa(string nomeF , int idadeF, float salarioF){
      printf("\nfuncionario cadastrado \n\n");
      nome = nomeF;
      idade = idadeF;
      salario = salarioF;
    }
    void Imprimir(){
      cout << "nome:"<< nome<< "\n";
      cout << "idade:"<< idade<< "\n";
      cout << "salario:"<< salario<< "\n";
    }
};

int main() {
  string nome;
  cout << "Digite o nome do funcionario:";
  cin >> nome;

  int idade;
  cout << "Digite a idade funcionario:";
  cin >> idade;

  float salario;
  cout << "Digite o salario do funcionario:";
  cin >> salario;

  Pessoa pessoa(nome,idade,salario);
  pessoa.Imprimir();
  return 0;
}