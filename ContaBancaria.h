#ifndef _CONTABANCARIA_H_
#define _CONTABANCARIA_H_

class ContaBancaria {
private:
    int numero;
    double saldo;
    Cliente titular;
public:
    ContaBancaria();
    ContaBancaria(int numero, Cliente titular, double saldo = 0);
    int getNumero();
    double getSaldo();
    int verificar_valor(double valor);
    void depositar(double valor);
    void sacar(double valor);
    void transferir(double valor, ContaBancaria &destino);
    void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2);
    void exibirSaldo();
    void exibirInformacoes();
};

#endif 