#include <iostream>
using namespace std;

class Usuario{
  private:
    string nome;
    string email;
  public:
    string getNome(){
      return nome;
    }
    void setNome(string novoNome){
      nome =novoNome;
    }
    string getEmail(){
      return email;
    }
    void setEmail(string novoEmail){
      email =novoEmail;
    }
};

class Personagem: public Usuario{
  private:
    int nivel = 1;
  public:
    int getNivel(){
      return nivel;
    }
    void setNivel(int novoNivel){
      nivel =novoNivel;
    }
    void aumentarUmNivel(int qtdNivel){
      nivel = nivel + qtdNivel;
    }
};

int main() {
  Usuario user;
  user.setNome("jonas");
  user.setEmail("jonas@com.br");

  cout << "nome: " << user.getNome() << "\nemail: " <<user.getEmail() <<"\n";

  Personagem play;
  play.setNivel(1);
  play.setNome("juca");
  play.setEmail("juca@com.br");

  cout << "nome: " << play.getNome() << "\nemail: " <<play.getEmail() <<"\n";
  cout << "nivel: " << play.getNivel()<<"\n" ;
  play.aumentarUmNivel(5);
  cout << "novo nivel: " << play.getNivel() ;
}