#include <iostream>
#include <string>
#include "Cliente.h"
#include "ContaBancaria.h"
using namespace std;

int main() {
    // Criação dos clientes
    Cliente cliente1("Ana", "111.111.111-11");
    Cliente cliente2("Bruno", "222.222.222-22");
    Cliente cliente3("Carla", "333.333.333-33");

    // Criação das contas bancárias com saldos iniciais
    ContaBancaria conta1(1001, cliente1, 1000.0);
    ContaBancaria conta2(1002, cliente2);
    ContaBancaria conta3(1003, cliente3);

    // Exibe o saldo inicial da conta de Ana
    conta1.exibirSaldo();

    // Deposita R$100 na conta de Carla
    conta3.depositar(100.0);

    // Sacar R$50 da conta de Bruno 
    conta2.sacar(50.0);


    // Ana transfere R$200 para Bruno
    conta1.transferir(200.0, conta2);

    // Ana transfere R$300 divididos entre Bruno e Carla
    conta1.transferir(300.0, conta2, conta3);

    // Exibição dos saldos finais
    cout << endl;
    conta1.exibirInformacoes();
    conta2.exibirInformacoes();
    conta3.exibirInformacoes();

    return 0;
}