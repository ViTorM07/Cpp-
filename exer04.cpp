#include<iostream>
//Entre como salario de um funcionario e me mostre o salario com 15% de reajuste
int main(){
    double salAtual, novSal;

    std::cout << "Digite o salario atual do funcionario"<<std::endl;
    std::cin >> salAtual;

    novSal = salAtual *1.15;

    std::cout << "O novo salario com reajuste"<< novSal<<std::endl;

    return 0;
}