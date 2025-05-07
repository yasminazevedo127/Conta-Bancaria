#include <iostream>  
#include <string>    
#include "Cliente.h" 

// Construtor padrão da classe Cliente
// Inicializa os atributos nome e cpf como strings vazias
Cliente::Cliente(){
    this->nome = "";
    this->cpf = "";
}

// Construtor parametrizado da classe Cliente
// Recebe nome e cpf como parâmetros e os atribui aos atributos do objeto
Cliente::Cliente(std::string nome, std::string cpf){
    this->nome = nome;
    this->cpf = cpf;
}

// Método getter que retorna o nome do cliente
std::string Cliente::getNome(){return this->nome;}

// Método getter que retorna o CPF do cliente
std::string Cliente::getCpf(){return this->cpf;}