#include <iostream>
using namespace std;

class Eletronico{
  private:
    string marca;
  public:
    string getMarca(){
      return marca;
    }
    void setMarca(string marcaNova){
      marca = marcaNova;
    }
  protected: 
    void souEletronico(){
      printf("\nSou eletronico!\n");
    }
};

class Celular: public Eletronico{
  private:
    int polegadas;
  public:
      Celular(){
        souEletronico();
      }
      int getPolegada(){
        return polegadas;
      }

      void setPolegada(int polegadasNova){
        polegadas = polegadasNova;
      }
};

int main() {
  Eletronico elet;
  elet.setMarca("Samsung ");
  cout << "Eletronico Marca: " << elet.getMarca();

  Celular cel;
  cel.setMarca("Iphone");
  cel.setPolegada(5);
  cout << "Eletronico Marca: " << cel.getMarca();
  cout << "\npolegadas: " << cel.getPolegada();
  return 0;
}