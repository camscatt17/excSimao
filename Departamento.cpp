#include <stdio.h>
#include "Departamento.h"
#include "Disciplina.h"
#include "Universidade.h"

Departamento::Departamento(){
    pDisciplPrim = NULL; //toda vez que existir ponteiros, uma boa prática é aterra-los logo de cara
    pDisciplAtual = NULL;
}

Departamento::~Departamento(){
    pDisciplPrim = NULL;
    pDisciplAtual = NULL;
}

void Departamento::setNomeDpto(const char* nome){
    strcpy(this->nome, nome);
}

char* Departamento::getNomeDpto(){
    return nome;
}

void Departamento::setUniv(Universidade* pUniv){
    this->pUniv = pu;
}

Universidade* Departamento::getUniv(){
    return pUniv;
}

void Departamento::incluaDisciplina(Disciplina* pDisc){
    if(pDisciplPrim == NULL){
        pDisciplPrim = pDisc;
        pDisciplAtual = pDisc;
    } else {
       pDisciplAtual->pProx = pDisc;
       pDisciplAtual = pDisc;
    }
}

void Departamento::listeDisciplina(){

}