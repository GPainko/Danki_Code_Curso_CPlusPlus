#include <iostream>
using namespace std;

class Celular{
  private:
    string marca;
    float preco;
  public:

    Celular(){
      marca ="";
      preco = 0;
    }

    Celular(string marca){
      setMarca(marca);
      preco = 0;
    }
    
    Celular(float preco){
      setPreco(preco);
    }

    Celular(string marca,float preco){
      setMarca(marca);
      setPreco(preco);
    }

    string getMarca(){
      return marca;
    }
    void setMarca(string marcaNova){
      marca=marcaNova;
    }

    float getPreco(){
      return preco;
    }
    void setPreco(float precoNovo){
      preco = precoNovo;
    }
};

int main() {
  Celular cel1;
  cout <<"Cell Marca: "<< cel1.getMarca()<<"\n";
  cout <<"Cell preço: "<< cel1.getPreco()<<"\n";

  Celular cel2("Motorola");
  cout <<"Cell Marca: "<< cel2.getMarca()<<"\n";
  cout <<"Cell preço: "<< cel2.getPreco()<<"\n";

  Celular cel3(889.98);
  cout <<"Cell Marca: "<< cel3.getMarca()<<"\n";
  cout <<"Cell preço: "<< cel3.getPreco()<<"\n";

  Celular cel4("iphone",8889.98);
  cout <<"Cell Marca: "<< cel4.getMarca()<<"\n";
  cout <<"Cell preço: "<< cel4.getPreco()<<"\n";
}