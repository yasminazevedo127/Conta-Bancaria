#ifndef _CLIENTE_H_
#define _CLIENTE_H_


class Cliente {
private: 
    std::string nome;
    std::string cpf;
public:
    Cliente();
    Cliente(std::string nome, std::string cpf);
    std::string getNome();
    std::string getCpf();
};
#endif 