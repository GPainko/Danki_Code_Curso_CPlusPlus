#include <iostream>
using namespace std;

class Idioma{
  public:
    void saudar(){
      
    }
};

class Ingles:public Idioma{
  public:
    void saudar(){
      cout<< "Hello \n";
    }
};

class Espanho:public Idioma{
  public:
    void saudar(){
      cout<<"hola\n";
    }
};

class Portugues:public Idioma{
  public:
    void saudar(){
      cout<<"Salve Rapaziada\n";
    }
};

int main() {
  Portugues br;
  Ingles us;
  Espanho es;

  br.saudar();
  us.saudar();
  es.saudar();
  
  return 0;
}