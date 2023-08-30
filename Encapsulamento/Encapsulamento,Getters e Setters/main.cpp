#include <iostream>
using namespace std;

class Pessoa{
  private:
    string nome;

  public:
    string getNome(){
      return nome;
    }
    void setNome(string nomeNovo){
      nome = nomeNovo;
    }
};
int main() {
  Pessoa pessoa1;
  pessoa1.setNome("Patrick");
  cout << pessoa1.getNome() << "\n";
  return 0;
}