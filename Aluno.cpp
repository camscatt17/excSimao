#include "Aluno.h"
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

Aluno::Aluno(int dia, int mes, int ano, const char* nome, int RA):
Pessoa(dia, mes, ano, nome){
     this->RA = RA;
}

Aluno::Aluno():
Pessoa(){

}

Aluno::~Aluno(){

}

int Aluno::getRA(){
    return this->RA;
}

void Aluno::setRA(int RA){
  this->RA = RA;  
}