#pragma once

class Universidade{
    private:
       char nome[30];

    public:
        Universidade();
        Universidade(char* nome);
        ~Universidade();
        char* getNome();
        void setNome(char* nome);
        void inicializa(char* nome); 
};

