#include <cstdio>
 int main() {
    int num;
    bool primo = true; // Solicita ao usuário que insira um número 
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num <= 1) {
         primo = false; 
    } else { 
        for (int i = 2; i < num; i++){
        if (num % i == 0) { 
        primo = false;
        break;
            } 
        }
    } // Exibe o resultado 
    if (primo == true) {
        printf("%d é um número primo.\n", num);
        } else {
        printf("%d não é um número primo.\n", num); } 
    return 0;
}


