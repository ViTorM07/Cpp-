#include<iostream>
//Entre com a base e a altura de um triangulo e me mostre a area
int main(){
double base, altura, area;

std::cout<< "Digite a base do triangulo"<<std::endl;
std::cin>> base;

std::cout<< "Digite a altura do triangulo"<<std::endl;
std::cin>> altura;

area = (base*altura)/2;

std::cout<< " A area do triangulo é de: "<< area<< std::endl;

return 0;


}