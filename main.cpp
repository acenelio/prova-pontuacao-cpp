#include <bits/stdc++.h>

using namespace std;

int main()
{
    int qteCompras, qteAtrasos;
    int scoreCompras, scoreInadimplencia, scoreFormaPagto, scoreTotal;
    double ticketMedio, volumeCompras;
    string pagamento, classificacaoFinal;

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

    scoreInadimplencia = 0;
    if (qteAtrasos > 1 || qteCompras == 0) {
        scoreInadimplencia = 0;
    }
    else if (qteCompras > 0 && qteAtrasos == 1) {
        scoreInadimplencia = 15;
    }
    else if (qteCompras > 0 && qteAtrasos == 0) {
        scoreInadimplencia = 30;
    }

    scoreFormaPagto = 0;
    if (qteCompras > 0 && pagamento == "D") {
        scoreFormaPagto = 5;
    }
    else if (qteCompras > 0) {
        scoreFormaPagto = 10;
    }

    cout << endl << "Score de volume de compras = " << scoreCompras << " pontos" << endl;
    cout << endl << "Score de inadimplencia = " << scoreInadimplencia << " pontos" << endl;
    cout << "Score de forma de pagamento = " << scoreFormaPagto << " pontos" << endl;

    scoreTotal = scoreCompras + scoreInadimplencia + scoreFormaPagto;

    if (scoreTotal <= 25) {
        classificacaoFinal = "BRONZE";
    }
    else if (scoreTotal <= 75) {
        classificacaoFinal = "PRATA";
    }
    else {
        classificacaoFinal = "OURO";
    }

    cout << endl << "Classificação final = CLIENTE " << classificacaoFinal << endl;

    return 0;
}
