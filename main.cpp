#include <bits/stdc++.h>

using namespace std;

int main()
{
    int qteCompras, qteAtrasos;
    int scoreCompras;
    double ticketMedio, volumeCompras;
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

    volumeCompras = qteCompras * ticketMedio;

    if (qteCompras == 0) {
        scoreCompras = 0;
    }
    else if (volumeCompras <= 3000.0 && qteCompras <= 2) {
        scoreCompras = 20;
    }
    else if (volumeCompras <= 3000.0 && qteCompras > 2) {
        scoreCompras = 40;
    }
    else {
        scoreCompras = 60;
    }

    cout << endl << "Score de volume de compras = " << scoreCompras << " pontos" << endl;

    return 0;
}
