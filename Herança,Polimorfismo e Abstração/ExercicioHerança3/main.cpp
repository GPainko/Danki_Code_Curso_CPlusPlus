#include <iostream>
using namespace std;

class Pessoa{
  private:
    string nome;
    int cpf;
  public:
    string getNome(){
      return nome;
    }
    void setNome(string nome){
      this->nome = nome;
    }
    int getCPF(){
      return cpf;
    }
    void setCPF(int cpf){
      this ->cpf = cpf;
    }
};

class Professor: public Pessoa{
  private:
    float salario;
  public:
    Professor(){}

    Professor(string nome,int cpf, float salario){
      setNome(nome);
      setCPF(cpf);
      setSalario(salario);
    }

    float getSalario(){
      return salario;
    }

    void setSalario(float salario){
      this->salario = salario;
    }
};
int main() {
  Pessoa pes;
  pes.setNome("jonas");
  pes.setCPF(2020);
  cout<<"nome: "<<pes.getNome()<<"\ncpf: "<<pes.getCPF()<<"\n";

  Professor prof("john",2323,2323.23);
  cout<<"nome: "<<prof.getNome()<<"\ncpf: "<<prof.getCPF()<<"\n";
  cout <<"salario:"<<prof.getSalario()<<"\n";

  Professor prof1;
  prof1.setNome("jana");
  prof1.setCPF(2022);
  prof1.setSalario(2022.22);
  cout<<"nome: "<<prof1.getNome()<<"\ncpf: "<<prof1.getCPF()<<"\n";
  cout <<"salario:"<<prof1.getSalario()<<"\n";
  return 0;
}