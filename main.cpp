#include <bits/stdc++.h>

using namespace std;

int main()
{
    int qteCompras, qteAtrasos;
    double ticketMedio;
    string pagamento;

    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------" << endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" << endl << endl;

    cout << "Quantas compras o cliente fez no ultimo ano? ";
    cin >> qteCompras;
    cout << "Qual o ticket medio? ";
    cin >> ticketMedio;

    cout << endl << "Quantas vezes o cliente atrasou o pagamento? ";
    cin >> qteAtrasos;
    cout << "A maioria das compras foi em dinheiro, cartao, ou boleto (D/C/B)? ";
    cin >> pagamento;

    return 0;
}
