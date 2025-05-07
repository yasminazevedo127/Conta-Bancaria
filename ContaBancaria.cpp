#include <iostream>
#include <string>
#include "Cliente.h"         
#include "ContaBancaria.h"   

// Construtor da classe ContaBancaria
// Inicializa o número da conta, o titular (objeto Cliente) e o saldo
ContaBancaria::ContaBancaria(int numero, Cliente titular, double saldo){
    this->numero = numero;
    this->saldo = saldo;
    this->titular = titular;
}

// Retorna o número da conta
int ContaBancaria::getNumero(){ return this->numero; }

// Retorna o saldo atual da conta
double ContaBancaria::getSaldo(){ return this->saldo; }

// Adiciona um valor ao saldo da conta
void ContaBancaria::depositar(double valor){
    if (valor > 0){
        this->saldo += valor;
    }
}

int ContaBancaria::verificarvalor(double valor){
    if (valor < this->saldo && valor > 0){
        return 1;
    } else if (valor > this->saldo){
        std::cout << "Saldo insuficiente!" << std::endl;
        return 0;
    } else {
        std::cout << "Valor invalido"
        return 0;
    }
} 
// Subtrai um valor do saldo da conta, se houver saldo suficiente
void ContaBancaria::sacar(double valor){
    if (verificar_valor(valor) == 1){
        this->saldo -= valor;
    }
}

// Transfere um valor para outra conta, se houver saldo suficiente
void ContaBancaria::transferir(double valor, ContaBancaria &destino){
    if (verificar_valor(valor) == 1){
        sacar(valor);
        destino.depositar(valor);
        std::cout << "Transferido: R$ " << valor << " da conta " << getNumero() << " para a conta " << destino.numero << std::endl;
    }
}

// Transfere um valor dividido igualmente entre duas contas de destino
void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
    if (verificar_valor(valor) == 1){
        sacar(valor);
        destino1.depositar(valor / 2);
        destino2.depositar(valor / 2);
        std::cout << "Transferido: R$ " << (valor / 2) << " para cada conta (" << destino1.numero << " e " << destino2.numero << ") da conta " << getNumero() << std::endl;
    }
}

// Exibe o saldo atual da conta no console
void ContaBancaria::exibirSaldo(){
    std::cout << "Saldo atual da conta " << getNumero() << ": R$ " << getSaldo() << std::endl;
}

// Exibe as informações do titular e da conta
void ContaBancaria::exibirInformacoes(){
    std::cout << "Titular: " << titular.getNome() << ", CPF: " << titular.getCpf() << std::endl;
    std::cout << "Número da Conta: " << getNumero() << ", Saldo: R$ " << getSaldo() << std::endl;
}