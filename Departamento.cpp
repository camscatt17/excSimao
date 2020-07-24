#include "Departamento.h"
#include <string.h>

Departamento::Departamento(){

}

Departamento::~Departamento(){

}

void Departamento::setNomeDpto(const char* nome){
    strcpy(this->nome, nome);
}

char* Departamento::getNomeDpto(){
    return this->nome;
}