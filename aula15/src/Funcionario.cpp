/**
    PCS2478 - Tópicos de Programação
    Funcionario.cpp

    @author 8586861 - Luiz Eduardo Sol (luizedusol@gmail.com)
    @author 7576829 - Augusto Ruy Machado (augustormachado@gmail.com)
    @version 15.0 2017-11-23
*/

#include "Funcionario.h"

using namespace std;

// Construtores da classe Funcionario
Funcionario::Funcionario(string idFuncional, string nome) :
  Funcionario(idFuncional, "1", nome) {}

Funcionario::Funcionario(string idFuncional, string tipoFuncionario,
                         string nome){
  Funcionario::setIdFuncional(idFuncional);
  Funcionario::setNome(nome);
  Funcionario::setTipoFuncionario(tipoFuncionario);
}

// Destrutor da classe empresa
Funcionario::~Funcionario(){}

// Setters e Getters
string Funcionario::getIdFuncional(){
  return this->idFuncional;
}

void Funcionario::setIdFuncional(string idFuncional){
  this->idFuncional = idFuncional;
}

string Funcionario::getNome(){
  return this->nome;
}

void Funcionario::setNome(string nome){
  this->nome = nome;
}

string Funcionario::getTipoFuncionario(){
  return this->tipoFuncionario;
}

void Funcionario::setTipoFuncionario(string tipoFuncionario){
  this->tipoFuncionario = tipoFuncionario;
}

/**
    Determina o salário mensal do funcionário.

    @param horasTrabalhadas (float): o total de horas trabalhadas pelo
      funcionário.
    @return o salário nominal do funcionário.
*/
float Funcionario::calcularRemuneracao(float horasTrabalhadas){
  return 0.0;
}
