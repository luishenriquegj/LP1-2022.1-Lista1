#ifndef database_hpp
#define database_hpp

#include <vector>
#include <iostream>

struct Pessoa{
    /*campos aqui*/
};

static std::vector<Pessoa*> base;

Pessoa* criar_pessoa(std::string nome, std::string cpf, std::string endereco);

Pessoa* procurar_cpf(const std::vector<Pessoa*> &base, const std::string cpf);

bool inserir_pessoa(const std::vector<Pessoa*> &base, Pessoa* p);

std::vector<Pessoa*> procurar_nome(const std::vector<Pessoa*> &base, std::string nome);

Pessoa* remover_pessoa(const std::vector<Pessoa*> &base, std::string cpf);

#endif //database_hpp