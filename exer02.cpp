#include<stdio.h>
int main(){
    //Me mostre d uma somatoria de numeros que saiam de n ate 0!
    int n, somat =0;
    printf("Para começar, voce deve digitar um numero para efetuar a somatória: ");
    scanf("%d", &n);
    for(int i = 0; i<=n; i++){
        somat += n;
    }
    printf("Somatoria: %d\n", somat);
    return 0;

}
