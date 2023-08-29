#include <iostream>
using namespace  std;

//bibliotecas necessários para limpeza do buffer
#include<ios>
#include<limits>

int main() {

  char frase[80]; // cria uma variavel para armazenar uma frase
  cout <<"digite uma frase:";

  //Quando vamos ler palavras e frases com o teclado
  //alguns compliladores se perdem com valores na memória 
  //para grantir seu funcionamento sem "lixo" no buffer
  cin.sync();

  //le a frase mesmo que tenha um espaço
  cin.getline(frase,80);
  
  // imprime o resultado
  cout << "frase:" << frase << "\n";

  //le de novo,pos limpar o buffer
  cin.sync();
  cin.getline(frase,80);
  cout << "frase:" << frase << "\n";

  return 0;
}