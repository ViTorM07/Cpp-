#include <cstdio>

int main() {
    int n, soma = 0;

    // Solicita ao usuário que insira o valor de n
    printf("Digite um número: ");
    scanf("%d", &n);

    // Calcula a soma dos primeiros n números naturais
    for (int i = 1; i <= n; ++i) {
        soma += i;
    }

    // Exibe o resultado
    printf("A soma dos primeiros %d números é: %d\n", n, soma);

    return 0;
}