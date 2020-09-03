#include "Professor.h"
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

Professor::Professor(int dia, int mes, int ano, const char* nome, const char* dominio):
Pessoa(dia, mes, ano, nome){
    pUnivFil = NULL;
    pDptoFil = NULL;
    strcpy(this->dominio, dominio);
}

Professor::Professor():
Pessoa(){
    pUnivFil = NULL;
    pDptoFil = NULL;
}

Professor::~Professor(){
    pUnivFil = NULL;
    pDptoFil = NULL;
}

void Professor::setUnivFil(Universidade* pUni){
    pUnivFil = pUni;
}

void Professor::setDptoFil(Departamento* pDpto){
    pDptoFil = pDpto;
}

void Professor::setDominio(const char* dominio){
    this->dominio = dominio;
}

char* Professor::getDominio(){
    return dominio;
}

void Professor::ondeTrabalho(){
    cout << nome << " trabalha para a " << pUnivFil->getNome() << endl;
}

void Professor::qualDptoTrabalho(){
    cout << nome << " trabalha para a " << pUnivFil->getNome() << pDptoFil->getNomeDpto() << endl;
}