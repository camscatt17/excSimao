#pragma once
#include <iostream>
#include "Universidade.h"
 
class Pessoa{
    private:
        int dia, mes, ano, idade;
        char nome[30];
        Universidade* pUni; //cria a associação (tpo de relação mais fraca)

    public:
        Pessoa();
        ~Pessoa();
        Pessoa(int dia, int mes, int ano, const char* nome);
        void inicializa(int dia, int mes, int ano, const char* nome);
        void calcIdade(int dia, int mes, int ano);
        int getIdade();

        //inicializa o ponteiro e permite a passagem do endereço
        void setUni(Universidade* pUni);
        void ondeTrabalha();
};

