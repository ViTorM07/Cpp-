#include <iostream>

using namespace std;

// Função para receber os valores reais
void receberValores(double &valor1, double &valor2) {
    cout << "Digite o primeiro valor real: ";
    cin >> valor1;
    cout << "Digite o segundo valor real: ";
    cin >> valor2;
}

// Função para calcular o maior valor
double calcularMaior(double valor1, double valor2) {
    return (valor1 > valor2) ? valor1 : valor2;
}

// Função para exibir o resultado
void exibirResultado(double maior) {
    cout << "O maior valor é: " << maior << endl;
}

int main() {
    double valor1, valor2, maior;

    // Recebe os valores reais
    receberValores(valor1, valor2);

    // Calcula o maior valor
    maior = calcularMaior(valor1, valor2);

    // Exibe o resultado
    exibirResultado(maior);

    return 0;
}