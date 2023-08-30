#include <iostream>
using namespace std;

class Animal{
  private:
    string terreno;
  public:
    string getTerreno(){
      return terreno;
    }
    void setTerreno(string terrenoNovo){
      terreno = terrenoNovo;
    }
};

class Mamifero: public Animal{
  private:
    int mesesGestacao;
  public:
    int getMesesGestacao(){
      return mesesGestacao;
    }
    void setMesesGestacao(int mesesGestacaoNova){
      mesesGestacao = mesesGestacaoNova;
    }
};

class Cachorro: public Mamifero{
  private:
    string raca;
  public:
    string getRaca(){
      return raca;
    }
    void setRaca(string racanoNova){
      raca = racanoNova;
    }
    void latir(){
      printf("AU AU");
    }
};

int main() {
  Animal ani;
  ani.setTerreno("rural");
  cout << "o terreno do animal é: "<<ani.getTerreno() <<"\n";

  Mamifero mam;
  mam.setMesesGestacao(9);
  mam.setTerreno("urbano");
  cout << "o terreno do animal é: "<<mam.getTerreno() <<"\n";
  cout << "o tempo em messes de gestação do animal é: "<<mam.getMesesGestacao() <<"\n";

  Cachorro dog;
  dog.setMesesGestacao(9);
  dog.setTerreno("selva");
  dog.setRaca("beagle");
  cout << "o terreno do cachorro é: "<<dog.getTerreno() <<"\n";
  cout << "o tempo em messes de gestação do cachorro é: "<<dog.getMesesGestacao() <<"\n";
  cout << "a raça do cachorro é: "<<dog.getRaca() <<"\n";
  dog.latir();
  return 0;
}