#pragma once

class Universidade {
    private:
        char nome[30];

    public:
        Universidade(const char* = "");
        ~Universidade();
        void setNome(const char* nome);
        char* getNome();
};