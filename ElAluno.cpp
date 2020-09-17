#include "ElAluno.h"
#include <iostream>

using std::cout;
using std::endl;

ElAluno::ElAluno(){
    pAl = NULL;
    pProx = NULL;
    pAnte = NULL;
}

ElAluno::~ElAluno(){
    pAl = NULL;
    pProx = NULL;
    pAnte = NULL;
}

void ElAluno::setAluno(Aluno* pa){
    pAl = pa;
}

Aluno* ElAluno::getAluno(){
    return pAl;
}

char* ElAluno::getNome(){
    return pAl->getNome();
}